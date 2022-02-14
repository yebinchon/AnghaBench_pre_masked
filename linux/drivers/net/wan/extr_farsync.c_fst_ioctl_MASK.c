
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct ifreq {TYPE_1__ ifr_settings; int * ifr_data; } ;
struct fstioc_write {scalar_t__ size; scalar_t__ offset; } ;
struct fstioc_info {scalar_t__ size; scalar_t__ offset; } ;
struct fst_port_info {int mode; struct fst_card_info* card; } ;
struct fst_card_info {int state; int card_no; int card_lock; scalar_t__ mem; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct fst_card_info*,int ,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

 int FUNC_3 (int ) ;
 int FUNC_4 (struct fst_card_info*) ;
 int FUNC_5 (struct fstioc_write*,int *,int) ;
 int FUNC_6 (int *,struct fstioc_write*,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 struct fst_port_info* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct fst_card_info*) ;
 int FUNC_10 (struct fst_card_info*) ;
 int FUNC_11 (struct fst_card_info*) ;
 int FUNC_12 (struct fst_card_info*,struct fst_port_info*,struct ifreq*) ;
 int FUNC_13 (struct fst_card_info*,struct fst_port_info*,struct ifreq*) ;
 int FUNC_14 (struct fst_card_info*,struct fst_port_info*,struct fstioc_write*) ;
 int FUNC_15 (struct net_device*,struct ifreq*,int) ;
 int VAR_14 ;
 int FUNC_16 (void*) ;
 int FUNC_17 (scalar_t__,void*,scalar_t__) ;
 void* FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (char*,int ,int ) ;
 int FUNC_20 (struct fst_card_info*,struct fst_port_info*,struct fstioc_write*) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_23(struct net_device *VAR_15, struct ifreq *VAR_16, int VAR_17)
{
 struct fst_card_info *VAR_18;
 struct fst_port_info *VAR_19;
 struct fstioc_write VAR_20;
 struct fstioc_info VAR_21;
 unsigned long VAR_22;
 void *VAR_23;

 FUNC_7(VAR_1, "ioctl: %x, %p\n", VAR_17, VAR_16->ifr_data);

 VAR_19 = FUNC_8(VAR_15);
 VAR_18 = VAR_19->card;

 if (!FUNC_3(VAR_0))
  return -VAR_6;

 switch (VAR_17) {
 case 142:
  FUNC_10(VAR_18);
  VAR_18->state = VAR_11;
  return 0;

 case 143:
  FUNC_9(VAR_18);
  VAR_18->state = VAR_13;
  return 0;

 case 139:




  if (VAR_16->ifr_data == ((void*)0)) {
   return -VAR_3;
  }
  if (FUNC_5(&VAR_20, VAR_16->ifr_data,
       sizeof (struct fstioc_write))) {
   return -VAR_2;
  }




  if (VAR_20.size > VAR_9 || VAR_20.offset > VAR_9 ||
      VAR_20.size + VAR_20.offset > VAR_9) {
   return -VAR_5;
  }



  VAR_23 = FUNC_18(*(VAR_16->ifr_data + sizeof(struct fstioc_write)),
      VAR_20.size);
  if (FUNC_1(VAR_23))
   return FUNC_2(VAR_23);

  FUNC_17(VAR_18->mem + VAR_20.offset, VAR_23, VAR_20.size);
  FUNC_16(VAR_23);




  if (VAR_18->state == VAR_11) {
   VAR_18->state = VAR_7;
  }
  return 0;

 case 141:




  if (VAR_18->state == VAR_13) {
   FUNC_4(VAR_18);


   if (VAR_18->state == VAR_12) {
    FUNC_21(&VAR_18->card_lock, VAR_22);
    FUNC_11(VAR_18);
    FUNC_0(VAR_18, VAR_14, 0xEE);
    FUNC_22(&VAR_18->card_lock, VAR_22);
   }
  }

  if (VAR_16->ifr_data == ((void*)0)) {
   return -VAR_3;
  }

  FUNC_14(VAR_18, VAR_19, &VAR_21);

  if (FUNC_6(VAR_16->ifr_data, &VAR_21, sizeof (VAR_21))) {
   return -VAR_2;
  }
  return 0;

 case 140:






  if (VAR_18->state != VAR_12) {
   FUNC_19("Attempt to configure card %d in non-running state (%d)\n",
          VAR_18->card_no, VAR_18->state);
   return -VAR_4;
  }
  if (FUNC_5(&VAR_21, VAR_16->ifr_data, sizeof (VAR_21))) {
   return -VAR_2;
  }

  return FUNC_20(VAR_18, VAR_19, &VAR_21);

 case 128:
  switch (VAR_16->ifr_settings.type) {
  case 138:
   return FUNC_12(VAR_18, VAR_19, VAR_16);

  case 135:
  case 132:
  case 133:
  case 131:
  case 130:
  case 134:
  case 136:
   return FUNC_13(VAR_18, VAR_19, VAR_16);

  case 129:
   VAR_19->mode = VAR_10;
   return 0;

  case 137:
   if (VAR_19->mode == VAR_10) {
    VAR_16->ifr_settings.type = 129;
    return 0;
   }
   return FUNC_15(VAR_15, VAR_16, VAR_17);

  default:
   VAR_19->mode = VAR_8;
   FUNC_7(VAR_1, "Passing this type to hdlc %x\n",
       VAR_16->ifr_settings.type);
   return FUNC_15(VAR_15, VAR_16, VAR_17);
  }

 default:

  return FUNC_15(VAR_15, VAR_16, VAR_17);
 }
}
