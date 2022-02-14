
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvme_ns {int dummy; } ;
struct nvme_ctrl {int dummy; } ;
typedef int __le32 ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 struct nvme_ns* FUNC_5 (struct nvme_ctrl*,unsigned int) ;
 int FUNC_6 (struct nvme_ctrl*,unsigned int,int *) ;
 int FUNC_7 (struct nvme_ns*) ;
 int FUNC_8 (struct nvme_ns*) ;
 int FUNC_9 (struct nvme_ctrl*,unsigned int) ;
 int FUNC_10 (struct nvme_ctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct nvme_ctrl *VAR_3, unsigned VAR_4)
{
 struct nvme_ns *VAR_5;
 __le32 *VAR_6;
 unsigned VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 unsigned VAR_11 = FUNC_0((u64)VAR_4, 1024);
 int VAR_12 = 0;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++) {
  VAR_12 = FUNC_6(VAR_3, VAR_10, VAR_6);
  if (VAR_12)
   goto free;

  for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_4, 1024U); VAR_8++) {
   VAR_9 = FUNC_3(VAR_6[VAR_8]);
   if (!VAR_9)
    goto out;

   FUNC_10(VAR_3, VAR_9);

   while (++VAR_10 < VAR_9) {
    VAR_5 = FUNC_5(VAR_3, VAR_10);
    if (VAR_5) {
     FUNC_7(VAR_5);
     FUNC_8(VAR_5);
    }
   }
  }
  VAR_4 -= VAR_8;
 }
 out:
 FUNC_9(VAR_3, VAR_10);
 free:
 FUNC_1(VAR_6);
 return VAR_12;
}
