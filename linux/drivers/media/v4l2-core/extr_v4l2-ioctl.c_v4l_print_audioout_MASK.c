
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audioout {int mode; int capability; int name; int index; } ;


 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_audioout *VAR_2 = VAR_0;

 if (VAR_1)
  FUNC_0("index=%u\n", VAR_2->index);
 else
  FUNC_0("index=%u, name=%.*s, capability=0x%x, mode=0x%x\n",
   VAR_2->index, (int)sizeof(VAR_2->name), VAR_2->name,
   VAR_2->capability, VAR_2->mode);
}
