
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct device {int dummy; } ;
struct pci_dev {int device; struct device dev; } ;
struct firmware {int size; scalar_t__ data; } ;
struct csio_hw {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct csio_hw*,char*,char const*,int) ;
 scalar_t__ FUNC_3 (struct csio_hw*,int *) ;
 int FUNC_4 (struct csio_hw*,char*,char const*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct csio_hw*,unsigned int,unsigned int,int,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (void*,void const*,int) ;
 int FUNC_10 (struct firmware const*) ;
 scalar_t__ FUNC_11 (struct firmware const**,char const*,struct device*) ;
 int FUNC_12 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static int
FUNC_13(struct csio_hw *VAR_7, u32 *VAR_8, char *VAR_9)
{
 int VAR_10 = 0;
 const struct firmware *VAR_11;
 struct pci_dev *VAR_12 = VAR_7->pdev;
 struct device *VAR_13 = &VAR_12->dev;
 unsigned int VAR_14 = 0, VAR_15 = 0;
 uint32_t *VAR_16;
 int VAR_17 = 0;
 const char *VAR_18;

 if (FUNC_5(VAR_12->device & VAR_0))
  VAR_18 = VAR_4;
 else
  VAR_18 = VAR_5;

 if (FUNC_11(&VAR_11, VAR_18, VAR_13) < 0) {
  FUNC_2(VAR_7, "could not find config file %s, err: %d\n",
    VAR_18, VAR_10);
  return -VAR_2;
 }

 if (VAR_11->size%4 != 0)
  VAR_17 = 4 - (VAR_11->size % 4);

 VAR_16 = FUNC_8(VAR_11->size+VAR_17, VAR_6);
 if (VAR_16 == ((void*)0)) {
  VAR_10 = -VAR_3;
  goto leave;
 }

 FUNC_9((void *)VAR_16, (const void *)VAR_11->data, VAR_11->size);
 if (FUNC_3(VAR_7, VAR_8) != 0) {
  VAR_10 = -VAR_1;
  goto leave;
 }

 VAR_14 = FUNC_0(*VAR_8);
 VAR_15 = FUNC_1(*VAR_8) << 16;

 VAR_10 = FUNC_6(VAR_7, VAR_14, VAR_15,
    VAR_11->size + VAR_17, VAR_16);

 if ((VAR_10 == 0) && (VAR_17 != 0)) {
  union {
   u32 word;
   char buf[4];
  } VAR_19;
  size_t VAR_20 = VAR_11->size & ~0x3;
  int VAR_21;

  VAR_19.word = VAR_16[VAR_20 >> 2];
  for (VAR_21 = VAR_17; VAR_21 < 4; VAR_21++)
   VAR_19.buf[VAR_21] = 0;
  VAR_10 = FUNC_6(VAR_7, VAR_14, VAR_15 + VAR_20, 4, &VAR_19.word);
 }
 if (VAR_10 == 0) {
  FUNC_4(VAR_7, "config file upgraded to %s\n", VAR_18);
  FUNC_12(VAR_9, 64, "%s%s", "/lib/firmware/", VAR_18);
 }

leave:
 FUNC_7(VAR_16);
 FUNC_10(VAR_11);
 return VAR_10;
}
