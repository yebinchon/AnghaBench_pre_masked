
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct z_erofs_decompress_req {unsigned int inputsize; scalar_t__* in; unsigned int outputsize; scalar_t__* out; int sb; scalar_t__ partial_decoding; int pageofs_out; scalar_t__ inplace_io; } ;
struct TYPE_2__ {int feature_incompat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_4 ;
 int const FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int *,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (struct z_erofs_decompress_req*,int *,unsigned int) ;
 int * FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int ,int,int,int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_11(struct z_erofs_decompress_req *VAR_8, u8 *VAR_9)
{
 unsigned int VAR_10, VAR_11;
 u8 *VAR_12;
 bool VAR_13, VAR_14;
 int VAR_15;

 if (VAR_8->inputsize > VAR_7)
  return -VAR_2;

 VAR_12 = FUNC_8(*VAR_8->in);
 VAR_10 = 0;
 VAR_14 = 0;


 if (FUNC_0(VAR_8->sb)->feature_incompat &
     VAR_3) {
  VAR_14 = 1;

  while (!VAR_12[VAR_10 & ~VAR_5])
   if (!(++VAR_10 & ~VAR_5))
    break;

  if (VAR_10 >= VAR_8->inputsize) {
   FUNC_9(VAR_12);
   return -VAR_1;
  }
 }

 VAR_13 = 0;
 VAR_11 = VAR_8->inputsize - VAR_10;
 if (VAR_8->inplace_io) {
  const uint VAR_16 = (VAR_8->pageofs_out +
       VAR_8->outputsize) & ~VAR_5;
  const uint VAR_17 = FUNC_3(VAR_8->pageofs_out +
        VAR_8->outputsize) >> VAR_6;

  if (VAR_8->partial_decoding || !VAR_14 ||
      VAR_8->out[VAR_17 - 1] != VAR_8->in[0] ||
      VAR_8->inputsize - VAR_16 <
        FUNC_1(VAR_11)) {
   VAR_12 = FUNC_7(VAR_8, VAR_12, VAR_10);
   VAR_10 = 0;
   VAR_13 = 1;
  }
 }

 VAR_15 = FUNC_2(VAR_12 + VAR_10, VAR_9,
       VAR_11, VAR_8->outputsize,
       VAR_8->outputsize);
 if (VAR_15 < 0) {
  FUNC_5(VAR_8->sb, "failed to decompress, in[%u, %u] out[%u]",
     VAR_11, VAR_10, VAR_8->outputsize);
  FUNC_4(1);
  FUNC_10(VAR_4, "[ in]: ", VAR_0,
          16, 1, VAR_12 + VAR_10, VAR_11, 1);
  FUNC_10(VAR_4, "[out]: ", VAR_0,
          16, 1, VAR_9, VAR_8->outputsize, 1);
  VAR_15 = -VAR_1;
 }

 if (VAR_13)
  FUNC_6(VAR_12);
 else
  FUNC_9(VAR_12);
 return VAR_15;
}
