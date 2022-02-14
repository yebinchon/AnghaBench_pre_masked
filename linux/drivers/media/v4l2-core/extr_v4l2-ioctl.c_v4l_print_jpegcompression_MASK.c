
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {int jpeg_markers; int COM_len; int APP_len; int APPn; int quality; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_jpegcompression *VAR_2 = VAR_0;

 FUNC_0("quality=%d, APPn=%d, APP_len=%d, COM_len=%d, jpeg_markers=0x%x\n",
  VAR_2->quality, VAR_2->APPn, VAR_2->APP_len,
  VAR_2->COM_len, VAR_2->jpeg_markers);
}
