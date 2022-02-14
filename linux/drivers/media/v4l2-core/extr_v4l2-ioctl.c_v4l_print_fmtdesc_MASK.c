
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; int description; int flags; int type; int index; } ;


 int FUNC_0 (char*,int ,int ,int ,int,int,int,int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const void *VAR_1, bool VAR_2)
{
 const struct v4l2_fmtdesc *VAR_3 = VAR_1;

 FUNC_0("index=%u, type=%s, flags=0x%x, pixelformat=%c%c%c%c, description='%.*s'\n",
  VAR_3->index, FUNC_1(VAR_3->type, VAR_0),
  VAR_3->flags, (VAR_3->pixelformat & 0xff),
  (VAR_3->pixelformat >> 8) & 0xff,
  (VAR_3->pixelformat >> 16) & 0xff,
  (VAR_3->pixelformat >> 24) & 0xff,
  (int)sizeof(VAR_3->description), VAR_3->description);
}
