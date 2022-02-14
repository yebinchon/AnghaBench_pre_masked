
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int device; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct nvme_ctrl*,int ,int ,int ,int *,size_t,int ) ;

__attribute__((used)) static void FUNC_4(struct nvme_ctrl *VAR_4)
{
 size_t VAR_5 = VAR_2 * sizeof(__le32);
 __le32 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5, VAR_0);
 if (!VAR_6)
  return;







 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_1, 0, VAR_6,
   VAR_5, 0);
 if (VAR_7)
  FUNC_0(VAR_4->device,
   "reading changed ns log failed: %d\n", VAR_7);

 FUNC_1(VAR_6);
}
