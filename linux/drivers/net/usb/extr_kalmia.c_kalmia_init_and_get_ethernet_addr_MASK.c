
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct usbnet {int dummy; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usbnet*,char*,int ,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int const,int) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_5(struct usbnet *VAR_4, u8 *VAR_5)
{
 static const char VAR_6[] =
  { 0x57, 0x50, 0x04, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00,
  0x00, 0x00 };
 static const char VAR_7[] =
  { 0x57, 0x50, 0x04, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf4,
  0x00, 0x00 };
 static const int VAR_8 = 28;
 char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_2 | VAR_3);
 if (!VAR_9)
  return -VAR_0;

 FUNC_4(VAR_9, VAR_6, 12);
 VAR_10 = FUNC_1(VAR_4, VAR_9, FUNC_0(VAR_6),
      VAR_9, 24);
 if (VAR_10 != 0)
  goto out;

 FUNC_4(VAR_9, VAR_7, 12);
 VAR_10 = FUNC_1(VAR_4, VAR_9, FUNC_0(VAR_7),
      VAR_9, 28);
 if (VAR_10 != 0)
  goto out;

 FUNC_4(VAR_5, VAR_9 + 10, VAR_1);
out:
 FUNC_2(VAR_9);
 return VAR_10;
}
