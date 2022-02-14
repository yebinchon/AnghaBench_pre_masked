
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usbnet*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_2, int VAR_3, u32 VAR_4,
          u32 VAR_5)
{
 int VAR_6 = VAR_0 + VAR_3 * 4;
 int VAR_7 = VAR_1 + VAR_3 * 16;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_6, VAR_4);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2->net, "Error writing WUF_CFGX\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_7, VAR_5);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2->net, "Error writing WUF_MASKX\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_7 + 4, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2->net, "Error writing WUF_MASKX\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_7 + 8, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2->net, "Error writing WUF_MASKX\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_7 + 12, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2->net, "Error writing WUF_MASKX\n");
  return VAR_8;
 }

 return 0;
}
