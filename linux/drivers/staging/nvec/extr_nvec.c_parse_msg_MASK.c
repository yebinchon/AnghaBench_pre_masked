
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {int* data; } ;
struct nvec_chip {int notifier_list; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int ,char*,int,int*) ;
 int FUNC_2 (int ,char*,int ,int,int,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct nvec_chip *VAR_3, struct nvec_msg *VAR_4)
{
 if ((VAR_4->data[0] & 1 << 7) == 0 && VAR_4->data[3]) {
  FUNC_1(VAR_3->dev, "ec responded %*ph\n", 4, VAR_4->data);
  return -VAR_1;
 }

 if ((VAR_4->data[0] >> 7) == 1 && (VAR_4->data[0] & 0x0f) == 5)
  FUNC_2(VAR_2, "ec system event ",
          VAR_0, 16, 1, VAR_4->data,
          VAR_4->data[1] + 2, 1);

 FUNC_0(&VAR_3->notifier_list, VAR_4->data[0] & 0x8f,
       VAR_4->data);

 return 0;
}
