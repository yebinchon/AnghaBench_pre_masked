
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvme_dev*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct nvme_dev *VAR_1, bool VAR_2)
{
 if (!FUNC_1(&VAR_1->ctrl))
  return -VAR_0;
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
