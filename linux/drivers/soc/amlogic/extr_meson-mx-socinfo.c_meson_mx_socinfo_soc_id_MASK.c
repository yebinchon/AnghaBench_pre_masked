
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 char const* FUNC_0 (char const*,int ) ;

__attribute__((used)) static const char *FUNC_1(unsigned int VAR_1,
        unsigned int VAR_2)
{
 const char *VAR_3;

 switch (VAR_1) {
 case 130:
  VAR_3 = "Meson6 (AML8726-MX)";
  break;

 case 129:
  if (VAR_2 == 0x11111112)
   VAR_3 = "Meson8m2 (S812)";
  else
   VAR_3 = "Meson8 (S802)";

  break;

 case 128:
  VAR_3 = "Meson8b (S805)";
  break;

 default:
  VAR_3 = "Unknown";
  break;
 }

 return FUNC_0(VAR_3, VAR_0);
}
