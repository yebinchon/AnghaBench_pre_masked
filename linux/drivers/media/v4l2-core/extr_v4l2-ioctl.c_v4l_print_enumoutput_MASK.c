
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_output {int capabilities; scalar_t__ std; int modulator; int audioset; int type; int name; int index; } ;


 int FUNC_0 (char*,int ,int,int ,int ,int ,int ,unsigned long long,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_output *VAR_2 = VAR_0;

 FUNC_0("index=%u, name=%.*s, type=%u, audioset=0x%x, modulator=%u, std=0x%08Lx, capabilities=0x%x\n",
  VAR_2->index, (int)sizeof(VAR_2->name), VAR_2->name, VAR_2->type, VAR_2->audioset,
  VAR_2->modulator, (unsigned long long)VAR_2->std, VAR_2->capabilities);
}
