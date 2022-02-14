
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct hso_shared_int {int shared_int_lock; int ref_count; } ;
struct TYPE_2__ {struct hso_serial* dev_serial; } ;
struct hso_serial {int minor; struct hso_shared_int* shared_int; int write_data; int tx_data_length; struct hso_serial* parent; TYPE_1__ port_data; } ;
struct hso_device {int minor; struct hso_shared_int* shared_int; int write_data; int tx_data_length; struct hso_device* parent; TYPE_1__ port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hso_serial* FUNC_0 (struct usb_interface*,int) ;
 int FUNC_1 (struct hso_serial*) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct hso_serial*,int,int ,int ) ;
 int FUNC_4 (struct hso_serial*) ;
 struct hso_serial* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct hso_serial*) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static
struct hso_device *FUNC_10(struct usb_interface *VAR_8,
      int VAR_9,
      struct hso_shared_int *VAR_10)
{
 struct hso_device *VAR_11;
 struct hso_serial *VAR_12;
 int VAR_13;

 VAR_13 = VAR_3;
 VAR_13 &= ~VAR_4;

 VAR_13 |= FUNC_2(VAR_9);
 if ((VAR_13 & VAR_4) == VAR_5)
  return ((void*)0);

 VAR_11 = FUNC_0(VAR_8, VAR_13);
 if (!VAR_11)
  return ((void*)0);

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  goto exit;

 VAR_11->port_data.dev_serial = VAR_12;
 VAR_12->parent = VAR_11;

 if (FUNC_3
     (VAR_12, 1, VAR_0, VAR_1))
  goto exit;

 VAR_12->tx_data_length--;
 VAR_12->write_data = VAR_6;

 VAR_12->shared_int = VAR_10;
 FUNC_6(&VAR_12->shared_int->shared_int_lock);
 VAR_12->shared_int->ref_count++;
 FUNC_7(&VAR_12->shared_int->shared_int_lock);


 FUNC_8(VAR_12->minor, VAR_12);


 FUNC_1(VAR_11);


 return VAR_11;

exit:
 if (VAR_12) {
  FUNC_9(VAR_7, VAR_12->minor);
  FUNC_4(VAR_12);
 }
 FUNC_4(VAR_11);
 return ((void*)0);

}
