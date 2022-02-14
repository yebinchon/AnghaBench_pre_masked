
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dev {int dev_state; int stream_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct au0828_dev *VAR_3)
{
 VAR_3->stream_state = VAR_2;
 if (FUNC_0(VAR_0, &VAR_3->dev_state))
  return -VAR_1;
 return 0;
}
