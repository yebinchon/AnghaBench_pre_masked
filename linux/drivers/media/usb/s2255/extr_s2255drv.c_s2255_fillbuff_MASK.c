
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* frame; } ;
struct s2255_vc {unsigned long last_frame; int width; int height; TYPE_3__* fmt; TYPE_2__ buffer; struct s2255_dev* dev; } ;
struct s2255_dev {int dummy; } ;
struct TYPE_8__ {int vb2_buf; } ;
struct s2255_buffer {TYPE_4__ vb; } ;
struct TYPE_7__ {int fourcc; } ;
struct TYPE_5__ {scalar_t__ lpvbits; } ;
 int FUNC_0 (struct s2255_dev*,int,char*,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (unsigned char const*,char*,int,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void FUNC_7(struct s2255_vc *VAR_0,
      struct s2255_buffer *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 const char *VAR_4;
 char *VAR_5 = FUNC_5(&VAR_1->vb.vb2_buf, 0);
 unsigned long VAR_6;
 struct s2255_dev *VAR_7 = VAR_0->dev;

 if (!VAR_5)
  return;
 VAR_6 = VAR_0->last_frame;
 if (VAR_6 != -1) {
  VAR_4 =
      (const char *)VAR_0->buffer.frame[VAR_6].lpvbits;
  switch (VAR_0->fmt->fourcc) {
  case 128:
  case 130:
   FUNC_2((const unsigned char *)VAR_4,
       VAR_5, VAR_0->width,
       VAR_0->height,
       VAR_0->fmt->fourcc);
   break;
  case 133:
   FUNC_1(VAR_5, VAR_4, VAR_0->width * VAR_0->height);
   break;
  case 132:
  case 131:
   FUNC_6(&VAR_1->vb.vb2_buf, 0, VAR_2);
   FUNC_1(VAR_5, VAR_4, VAR_2);
   break;
  case 129:
   FUNC_1(VAR_5, VAR_4,
          VAR_0->width * VAR_0->height * 2);
   break;
  default:
   FUNC_4("s2255: unknown format?\n");
  }
  VAR_0->last_frame = -1;
 } else {
  FUNC_3("s2255: =======no frame\n");
  return;
 }
 FUNC_0(VAR_7, 2, "s2255fill at : Buffer %p size= %d\n",
  VAR_5, VAR_3);
}
