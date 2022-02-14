
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int dummy; } ;
struct cobalt_stream {int alsa; } ;


 int FUNC_0 (int ,unsigned char*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vb2_buffer*,int ) ;
 unsigned char* FUNC_4 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_1, void *VAR_2)
{
 struct cobalt_stream *VAR_3 = VAR_2;
 unsigned char *VAR_4 = FUNC_4(VAR_1, 0);
 int VAR_5;

 if (VAR_0) {
  FUNC_2("alsa: ");
  for (VAR_5 = 0; VAR_5 < 8 * 4; VAR_5++) {
   if (!(VAR_5 & 3))
    FUNC_1(" ");
   FUNC_1("%02x", VAR_4[VAR_5]);
  }
  FUNC_1("\n");
 }
 FUNC_0(VAR_3->alsa,
   FUNC_4(VAR_1, 0),
   8 * 4,
   FUNC_3(VAR_1, 0) / (8 * 4));
 return 0;
}
