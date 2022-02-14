
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int flags; int cmd; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_encoder_cmd *VAR_2 = VAR_0;

 FUNC_0("cmd=%d, flags=0x%x\n",
   VAR_2->cmd, VAR_2->flags);
}
