
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ssb_sprom {void* revision; } ;
struct TYPE_6__ {int status; TYPE_2__* dev; } ;
struct ssb_bus {int chip_id; void* sprom_size; void* sprom_offset; TYPE_3__ chipco; } ;
struct TYPE_4__ {int revision; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int * FUNC_0 (void*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (struct ssb_bus*,int *) ;
 int FUNC_7 (struct ssb_bus*,struct ssb_sprom*,int *,void*) ;
 int FUNC_8 (struct ssb_bus*,struct ssb_sprom*) ;
 int FUNC_9 (struct ssb_bus*) ;

__attribute__((used)) static int FUNC_10(struct ssb_bus *VAR_7,
        struct ssb_sprom *VAR_8)
{
 int VAR_9;
 u16 *VAR_10;

 if (!FUNC_9(VAR_7)) {
  FUNC_3("No SPROM available!\n");
  return -VAR_0;
 }
 if (VAR_7->chipco.dev) {





  if (VAR_7->chipco.dev->id.revision >= 31)
   VAR_7->sprom_offset = VAR_6;
  else if (VAR_7->chip_id == 0x4312 &&
    (VAR_7->chipco.status & 0x03) == 2)
   VAR_7->sprom_offset = VAR_6;
  else
   VAR_7->sprom_offset = VAR_5;
 } else {
  VAR_7->sprom_offset = VAR_5;
 }
 FUNC_2("SPROM offset is 0x%x\n", VAR_7->sprom_offset);

 VAR_10 = FUNC_0(VAR_3, sizeof(u16), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_7->sprom_size = VAR_3;
 FUNC_6(VAR_7, VAR_10);
 VAR_9 = FUNC_5(VAR_10, VAR_7->sprom_size);
 if (VAR_9) {

  FUNC_1(VAR_10);
  VAR_10 = FUNC_0(VAR_4, sizeof(u16),
         VAR_2);
  if (!VAR_10)
   return -VAR_1;
  VAR_7->sprom_size = VAR_4;
  FUNC_6(VAR_7, VAR_10);
  VAR_9 = FUNC_5(VAR_10, VAR_7->sprom_size);
  if (VAR_9) {




   VAR_9 = FUNC_8(VAR_7, VAR_8);
   if (VAR_9) {
    FUNC_4("WARNING: Using fallback SPROM failed (err %d)\n",
     VAR_9);
    goto out_free;
   } else {
    FUNC_2("Using SPROM revision %d provided by platform\n",
      VAR_8->revision);
    VAR_9 = 0;
    goto out_free;
   }
   FUNC_4("WARNING: Invalid SPROM CRC (corrupt SPROM)\n");
  }
 }
 VAR_9 = FUNC_7(VAR_7, VAR_8, VAR_10, VAR_7->sprom_size);

out_free:
 FUNC_1(VAR_10);
 return VAR_9;
}
