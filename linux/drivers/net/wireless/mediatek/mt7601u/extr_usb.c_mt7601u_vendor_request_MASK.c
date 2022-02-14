
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct mt7601u_dev {int dev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_0 (int ,char*,int const,int const,int) ;
 int FUNC_1 (int) ;
 struct usb_device* FUNC_2 (struct mt7601u_dev*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mt7601u_dev*,unsigned int const,int const,int const,int const,int const,void*,size_t const,int) ;
 int FUNC_5 (struct usb_device*,unsigned int const,int const,int const,int const,int const,void*,size_t const,int ) ;
 unsigned int FUNC_6 (struct usb_device*,int ) ;
 unsigned int FUNC_7 (struct usb_device*,int ) ;

int FUNC_8(struct mt7601u_dev *VAR_7, const u8 VAR_8,
      const u8 VAR_9, const u16 VAR_10, const u16 VAR_11,
      void *VAR_12, const size_t VAR_13)
{
 int VAR_14, VAR_15;
 struct usb_device *VAR_16 = FUNC_2(VAR_7);
 const u8 VAR_17 = VAR_9 | VAR_6 | VAR_5;
 const unsigned int VAR_18 = (VAR_9 == VAR_4) ?
  FUNC_6(VAR_16, 0) : FUNC_7(VAR_16, 0);

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  VAR_15 = FUNC_5(VAR_16, VAR_18, VAR_8, VAR_17,
          VAR_10, VAR_11, VAR_12, VAR_13,
          VAR_3);
  FUNC_4(VAR_7, VAR_18, VAR_8, VAR_17, VAR_10, VAR_11,
      VAR_12, VAR_13, VAR_15);

  if (VAR_15 == -VAR_0)
   FUNC_3(VAR_1, &VAR_7->state);
  if (VAR_15 >= 0 || VAR_15 == -VAR_0)
   return VAR_15;

  FUNC_1(5);
 }

 FUNC_0(VAR_7->dev, "Vendor request req:%02x off:%04x failed:%d\n",
  VAR_8, VAR_11, VAR_15);

 return VAR_15;
}
