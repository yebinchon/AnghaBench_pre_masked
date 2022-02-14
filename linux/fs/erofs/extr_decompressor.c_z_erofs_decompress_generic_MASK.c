
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_decompressor {int (* decompress ) (struct z_erofs_decompress_req*,void*) ;int (* prepare_destpages ) (struct z_erofs_decompress_req*,struct list_head*) ;} ;
struct z_erofs_decompress_req {int pageofs_out; int outputsize; int inplace_io; int * out; int alg; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 unsigned int FUNC_2 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,void*,int,int) ;
 struct z_erofs_decompressor* VAR_4 ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct z_erofs_decompress_req*,void*) ;
 int FUNC_11 (struct z_erofs_decompress_req*,struct list_head*) ;
 int FUNC_12 (struct z_erofs_decompress_req*,void*) ;
 void* FUNC_13 (int *,unsigned int const,int,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (void*,unsigned int const) ;

__attribute__((used)) static int FUNC_16(struct z_erofs_decompress_req *VAR_5,
          struct list_head *VAR_6)
{
 const unsigned int VAR_7 =
  FUNC_2(VAR_5->pageofs_out + VAR_5->outputsize) >> VAR_2;
 const struct z_erofs_decompressor *VAR_8 = VAR_4 + VAR_5->alg;
 unsigned int VAR_9;
 void *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7 == 1 && !VAR_5->inplace_io) {
  FUNC_0(!*VAR_5->out);
  VAR_10 = FUNC_7(*VAR_5->out);
  VAR_9 = 0;
  goto dstmap_out;
 }






 if (VAR_5->outputsize <= VAR_3 * 7 / 8) {
  VAR_10 = FUNC_5(0);
  if (FUNC_1(VAR_10))
   return FUNC_3(VAR_10);

  VAR_5->inplace_io = 0;
  VAR_11 = VAR_8->decompress(VAR_5, VAR_10);
  if (!VAR_11)
   FUNC_4(VAR_5->out, VAR_10, VAR_5->pageofs_out,
       VAR_5->outputsize);

  FUNC_6(VAR_10);
  return VAR_11;
 }

 VAR_11 = VAR_8->prepare_destpages(VAR_5, VAR_6);
 if (VAR_11 < 0) {
  return VAR_11;
 } else if (VAR_11) {
  VAR_10 = FUNC_9(*VAR_5->out);
  VAR_9 = 1;
  goto dstmap_out;
 }

 VAR_12 = 0;
 while (1) {
  VAR_10 = FUNC_13(VAR_5->out, VAR_7, -1, VAR_1);


  if (VAR_10 || ++VAR_12 >= 3)
   break;
  FUNC_14();
 }

 if (!VAR_10)
  return -VAR_0;

 VAR_9 = 2;

dstmap_out:
 VAR_11 = VAR_8->decompress(VAR_5, VAR_10 + VAR_5->pageofs_out);

 if (!VAR_9)
  FUNC_8(VAR_10);
 else if (VAR_9 == 2)
  FUNC_15(VAR_10, VAR_7);
 return VAR_11;
}
