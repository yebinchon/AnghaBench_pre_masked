
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mtd_info {int oobsize; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct INFTLrecord {TYPE_1__ mbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mtd_info*,unsigned int,int,size_t*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (struct mtd_info*,unsigned int,int,size_t*,int *) ;

__attribute__((used)) static int FUNC_5(struct INFTLrecord *VAR_2, unsigned int VAR_3,
 int VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = VAR_2->mbd.mtd;
 size_t VAR_7;
 int VAR_8, VAR_9;
 u8 *VAR_10;

 VAR_10 = FUNC_2(VAR_1 + VAR_6->oobsize, VAR_0);
 if (!VAR_10)
  return -1;

 VAR_9 = -1;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8 += VAR_1) {
  if (FUNC_4(VAR_6, VAR_3, VAR_1, &VAR_7, VAR_10))
   goto out;
  if (FUNC_3(VAR_10, 0xff, VAR_1) != 0)
   goto out;

  if (VAR_5) {
   if(FUNC_0(VAR_6, VAR_3, VAR_6->oobsize,
       &VAR_7, &VAR_10[VAR_1]) < 0)
    goto out;
   if (FUNC_3(VAR_10 + VAR_1, 0xff, VAR_6->oobsize) != 0)
    goto out;
  }
  VAR_3 += VAR_1;
 }

 VAR_9 = 0;

out:
 FUNC_1(VAR_10);
 return VAR_9;
}
