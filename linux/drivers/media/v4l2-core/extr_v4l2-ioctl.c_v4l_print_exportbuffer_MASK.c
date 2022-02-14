
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_exportbuffer {int flags; int plane; int index; int type; int fd; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const void *VAR_1, bool VAR_2)
{
 const struct v4l2_exportbuffer *VAR_3 = VAR_1;

 FUNC_0("fd=%d, type=%s, index=%u, plane=%u, flags=0x%08x\n",
  VAR_3->fd, FUNC_1(VAR_3->type, VAR_0),
  VAR_3->index, VAR_3->plane, VAR_3->flags);
}
