
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct greybus_descriptor_cport {int protocol_id; int id; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_fw_core {struct gb_connection* download_connection; struct gb_connection* spi_connection; struct gb_connection* cap_connection; struct gb_connection* mgmt_connection; } ;
struct gb_connection {int dummy; } ;
struct gb_bundle {int num_cports; TYPE_1__* intf; int dev; struct greybus_descriptor_cport* cport_desc; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 struct gb_connection* FUNC_5 (struct gb_bundle*,int ,int *) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*) ;
 int * VAR_5 ;
 int FUNC_9 (struct gb_connection*) ;
 int * VAR_6 ;
 int FUNC_10 (struct gb_connection*) ;
 int FUNC_11 (struct gb_connection*) ;
 int FUNC_12 (struct gb_bundle*) ;
 int FUNC_13 (struct gb_bundle*,struct gb_fw_core*) ;
 int FUNC_14 (struct gb_fw_core*) ;
 struct gb_fw_core* FUNC_15 (int,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct gb_bundle *VAR_7,
       const struct greybus_bundle_id *VAR_8)
{
 struct greybus_descriptor_cport *VAR_9;
 struct gb_connection *VAR_10;
 struct gb_fw_core *VAR_11;
 int VAR_12, VAR_13;
 u16 VAR_14;
 u8 VAR_15;

 VAR_11 = FUNC_15(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;


 for (VAR_13 = 0; VAR_13 < VAR_7->num_cports; VAR_13++) {
  VAR_9 = &VAR_7->cport_desc[VAR_13];
  VAR_14 = FUNC_16(VAR_9->id);
  VAR_15 = VAR_9->protocol_id;

  switch (VAR_15) {
  case 129:

   if (VAR_11->mgmt_connection) {
    FUNC_2(&VAR_7->dev,
     "multiple management CPorts found\n");
    VAR_12 = -VAR_0;
    goto err_destroy_connections;
   }

   VAR_10 = FUNC_5(VAR_7, VAR_14,
      VAR_6);
   if (FUNC_0(VAR_10)) {
    VAR_12 = FUNC_1(VAR_10);
    FUNC_2(&VAR_7->dev,
     "failed to create management connection (%d)\n",
     VAR_12);
    goto err_destroy_connections;
   }

   VAR_11->mgmt_connection = VAR_10;
   break;
  case 130:

   if (VAR_11->download_connection) {
    FUNC_2(&VAR_7->dev,
     "multiple download CPorts found\n");
    VAR_12 = -VAR_0;
    goto err_destroy_connections;
   }

   VAR_10 = FUNC_5(VAR_7, VAR_14,
      VAR_5);
   if (FUNC_0(VAR_10)) {
    FUNC_2(&VAR_7->dev, "failed to create download connection (%ld)\n",
     FUNC_1(VAR_10));
   } else {
    VAR_11->download_connection = VAR_10;
   }

   break;
  case 128:

   if (VAR_11->spi_connection) {
    FUNC_2(&VAR_7->dev,
     "multiple SPI CPorts found\n");
    VAR_12 = -VAR_0;
    goto err_destroy_connections;
   }

   VAR_10 = FUNC_5(VAR_7, VAR_14,
         ((void*)0));
   if (FUNC_0(VAR_10)) {
    FUNC_2(&VAR_7->dev, "failed to create SPI connection (%ld)\n",
     FUNC_1(VAR_10));
   } else {
    VAR_11->spi_connection = VAR_10;
   }

   break;
  case 131:

   if (VAR_11->cap_connection) {
    FUNC_2(&VAR_7->dev, "multiple Authentication CPorts found\n");
    VAR_12 = -VAR_0;
    goto err_destroy_connections;
   }

   VAR_10 = FUNC_5(VAR_7, VAR_14,
         ((void*)0));
   if (FUNC_0(VAR_10)) {
    FUNC_2(&VAR_7->dev, "failed to create Authentication connection (%ld)\n",
     FUNC_1(VAR_10));
   } else {
    VAR_11->cap_connection = VAR_10;
   }

   break;
  default:
   FUNC_2(&VAR_7->dev, "invalid protocol id (0x%02x)\n",
    VAR_15);
   VAR_12 = -VAR_0;
   goto err_destroy_connections;
  }
 }


 if (!VAR_11->mgmt_connection) {
  FUNC_2(&VAR_7->dev, "missing management connection\n");
  VAR_12 = -VAR_1;
  goto err_destroy_connections;
 }

 VAR_12 = FUNC_8(VAR_11->download_connection);
 if (VAR_12) {

  FUNC_2(&VAR_7->dev, "failed to initialize firmware download connection, disable it (%d)\n",
   VAR_12);
  FUNC_6(VAR_11->download_connection);
  VAR_11->download_connection = ((void*)0);
 }

 VAR_12 = FUNC_11(VAR_11->spi_connection);
 if (VAR_12) {

  FUNC_2(&VAR_7->dev, "failed to initialize SPI connection, disable it (%d)\n",
   VAR_12);
  FUNC_6(VAR_11->spi_connection);
  VAR_11->spi_connection = ((void*)0);
 }

 VAR_12 = FUNC_4(VAR_11->cap_connection);
 if (VAR_12) {

  FUNC_2(&VAR_7->dev, "failed to initialize CAP connection, disable it (%d)\n",
   VAR_12);
  FUNC_6(VAR_11->cap_connection);
  VAR_11->cap_connection = ((void*)0);
 }

 VAR_12 = FUNC_9(VAR_11->mgmt_connection);
 if (VAR_12) {

  FUNC_2(&VAR_7->dev, "failed to initialize firmware management connection, disable it (%d)\n",
   VAR_12);
  goto err_exit_connections;
 }

 FUNC_13(VAR_7, VAR_11);


 if (!(VAR_7->intf->quirks & VAR_3))
  FUNC_12(VAR_7);

 return 0;

err_exit_connections:
 FUNC_3(VAR_11->cap_connection);
 FUNC_10(VAR_11->spi_connection);
 FUNC_7(VAR_11->download_connection);
err_destroy_connections:
 FUNC_6(VAR_11->mgmt_connection);
 FUNC_6(VAR_11->cap_connection);
 FUNC_6(VAR_11->spi_connection);
 FUNC_6(VAR_11->download_connection);
 FUNC_14(VAR_11);

 return VAR_12;
}
