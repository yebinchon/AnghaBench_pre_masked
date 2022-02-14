
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (unsigned char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int *,unsigned char*,int) ;
 int FUNC_4 (struct acpi_device*,size_t) ;
 int * VAR_5 ;
 unsigned int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_7,
  unsigned int VAR_8)
{
 u64 VAR_9;
 int VAR_10;
 unsigned char VAR_11[32] = { 0 };

 VAR_9 = FUNC_2(VAR_8);
 VAR_6 = VAR_8;

 VAR_10 = FUNC_3(VAR_4, "SN06", &VAR_9, VAR_11,
   32);
 if (VAR_10 < 0)
  return VAR_10;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_11); VAR_10++) {

  if (VAR_11[VAR_10] == 0xff)
   break;

  FUNC_1("Radio devices, found 0x%.2x\n", VAR_11[VAR_10]);

  if (VAR_11[VAR_10] == 0 && !VAR_5[VAR_1])
   FUNC_4(VAR_7, VAR_1);

  if (VAR_11[VAR_10] == 0x10 && !VAR_5[VAR_0])
   FUNC_4(VAR_7, VAR_0);

  if (((0xf0 & VAR_11[VAR_10]) == 0x20 ||
     (0xf0 & VAR_11[VAR_10]) == 0x50) &&
    !VAR_5[VAR_3])
   FUNC_4(VAR_7, VAR_3);

  if (VAR_11[VAR_10] == 0x30 && !VAR_5[VAR_2])
   FUNC_4(VAR_7, VAR_2);
 }
 return 0;
}
