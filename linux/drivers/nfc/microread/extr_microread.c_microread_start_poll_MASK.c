
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nfc_hci_dev {int* gb; int gb_len; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* FUNC_0 (int ,int*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int*,int) ;
 int FUNC_2 (struct nfc_hci_dev*,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_14,
    u32 VAR_15, u32 VAR_16)
{
 int VAR_17;

 u8 VAR_18[2];
 u8 VAR_19;

 VAR_18[0] = 0x00;
 VAR_18[1] = 0x00;

 if (VAR_15 & VAR_10)
  VAR_18[0] |= (1 << 2);

 if (VAR_15 & VAR_9)
  VAR_18[0] |= 1;

 if (VAR_15 & VAR_12)
  VAR_18[1] |= 1;

 if (VAR_15 & VAR_11)
  VAR_18[0] |= (1 << 1);

 if (VAR_15 & VAR_8)
  VAR_18[0] |= (1 << 5);

 if (VAR_15 & VAR_13)
  VAR_18[1] |= (1 << 1);

 if ((VAR_15 | VAR_16) & VAR_13) {
  VAR_14->gb = FUNC_0(VAR_14->ndev,
             &VAR_14->gb_len);
  if (VAR_14->gb == ((void*)0) || VAR_14->gb_len == 0) {
   VAR_15 &= ~VAR_13;
   VAR_16 &= ~VAR_13;
  }
 }

 VAR_17 = FUNC_1(VAR_14, VAR_2,
          VAR_1, ((void*)0), 0);
 if (VAR_17)
  return VAR_17;

 VAR_19 = 0xff;
 VAR_17 = FUNC_2(VAR_14, VAR_4,
         VAR_7, &VAR_19, 1);
 if (VAR_17)
  return VAR_17;

 if (VAR_15 & VAR_13) {
  VAR_17 = FUNC_2(VAR_14, VAR_3,
          VAR_5,
          VAR_14->gb, VAR_14->gb_len);
  if (VAR_17)
   return VAR_17;
 }

 if (VAR_16 & VAR_13) {
  VAR_17 = FUNC_2(VAR_14, VAR_4,
          VAR_6,
          VAR_14->gb, VAR_14->gb_len);
  if (VAR_17)
   return VAR_17;

  VAR_19 = 0x02;
  VAR_17 = FUNC_2(VAR_14, VAR_4,
          VAR_7, &VAR_19, 1);
  if (VAR_17)
   return VAR_17;
 }

 return FUNC_1(VAR_14, VAR_2,
      VAR_0,
      VAR_18, 2);
}
