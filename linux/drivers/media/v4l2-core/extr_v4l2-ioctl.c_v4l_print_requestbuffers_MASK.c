
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int memory; int type; int count; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(const void *VAR_2, bool VAR_3)
{
 const struct v4l2_requestbuffers *VAR_4 = VAR_2;

 FUNC_0("count=%d, type=%s, memory=%s\n",
  VAR_4->count,
  FUNC_1(VAR_4->type, VAR_1),
  FUNC_1(VAR_4->memory, VAR_0));
}
