
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int rx_urb; int endp_in; int usb; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int ) ;
 short FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,unsigned char*,int ,int ,struct zd1201*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct zd1201*,int ,int,int ,int ) ;
 int FUNC_8 (struct zd1201*,int ,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct zd1201 *VAR_7)
{
 int VAR_8, VAR_9;
 short VAR_10;
 __le16 VAR_11;
 unsigned char *VAR_12;

 VAR_12 = FUNC_1(VAR_5, VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_3(VAR_7->rx_urb, VAR_7->usb,
     FUNC_5(VAR_7->usb, VAR_7->endp_in), VAR_12, VAR_5,
     VAR_6, VAR_7);

 VAR_8 = FUNC_6(VAR_7->rx_urb, VAR_1);
 if (VAR_8)
  goto err_buffer;

 VAR_8 = FUNC_7(VAR_7, VAR_3, 0, 0, 0);
 if (VAR_8)
  goto err_urb;

 VAR_8 = FUNC_8(VAR_7, VAR_4, &VAR_11,
     sizeof(__le16));
 if (VAR_8)
  goto err_urb;

 VAR_10 = FUNC_2(VAR_11);
 for (VAR_9=0; VAR_9<VAR_10; VAR_9++) {
  VAR_8 = FUNC_7(VAR_7, VAR_2, 1514, 0, 0);
  if (VAR_8)
   goto err_urb;
 }

 return 0;

err_urb:
 FUNC_4(VAR_7->rx_urb);
 return VAR_8;
err_buffer:
 FUNC_0(VAR_12);
 return VAR_8;
}
