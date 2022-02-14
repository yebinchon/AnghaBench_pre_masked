
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int irq; int mem_start; int mem_end; int name; } ;
struct ifmap {unsigned int base_addr; int irq; unsigned int mem_start; } ;
struct frad_local {int initialized; int type; char state; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;

 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 unsigned int VAR_19 ;

 char VAR_20 ;
 char VAR_21 ;
 char VAR_22 ;
 char VAR_23 ;
 char VAR_24 ;
 char VAR_25 ;
 char VAR_26 ;
 char VAR_27 ;
 char VAR_28 ;
 char VAR_29 ;
 char VAR_30 ;
 char VAR_31 ;
 char VAR_32 ;

 char VAR_33 ;
 char VAR_34 ;
 char VAR_35 ;
 char VAR_36 ;
 char VAR_37 ;
 unsigned int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int,struct net_device*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct frad_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char,scalar_t__) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (unsigned int,int) ;
 scalar_t__ FUNC_8 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_9 (unsigned int,int,int ) ;
 int VAR_40 ;
 unsigned int* VAR_41 ;
 unsigned int* VAR_42 ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_43, struct ifmap *VAR_44)
{
 struct frad_local *VAR_45;
 int VAR_46;
 char VAR_47;
 unsigned VAR_48;
 int VAR_49 = -VAR_1;

 VAR_45 = FUNC_4(VAR_43);

 if (VAR_45->initialized)
  return -VAR_1;

 for(VAR_46=0; VAR_46 < FUNC_0(VAR_42); VAR_46++)
  if (VAR_42[VAR_46] == VAR_44->base_addr)
   break;

 if (VAR_46 == FUNC_0(VAR_42))
  return -VAR_1;

 if (!FUNC_9(VAR_44->base_addr, VAR_5, VAR_43->name)){
  FUNC_6("io-port 0x%04lx in use\n", VAR_43->base_addr);
  return -VAR_1;
 }
 VAR_48 = VAR_44->base_addr;



 VAR_45->type = VAR_39;
 VAR_45->state = 0;

 for(VAR_46=1;VAR_46<VAR_5;VAR_46++)
  if (FUNC_2(VAR_48 + VAR_46) != 0xFF)
   break;

 if (VAR_46 == VAR_5) {
  FUNC_5(VAR_4, VAR_48 + VAR_9);
  if ((FUNC_2(VAR_48 + VAR_19) & 0x0F) == 0x08) {
   FUNC_5(VAR_14, VAR_48 + VAR_7);
   if ((FUNC_2(VAR_48 + VAR_19) & 0x0F) == 0x0C) {
    FUNC_5(VAR_4, VAR_48 + VAR_7);
    VAR_45->type = 130;
    goto got_type;
   }
  }
 }

 for(VAR_47=FUNC_2(VAR_48),VAR_46=0;VAR_46<VAR_5;VAR_46++)
  if (FUNC_2(VAR_48 + VAR_46) != VAR_47)
   break;

 if (VAR_46 == VAR_5) {
  FUNC_5(VAR_4, VAR_48 + VAR_7);
  if ((FUNC_2(VAR_48 + VAR_19) & 0x7E) == 0x30) {
   FUNC_5(VAR_20, VAR_48 + VAR_7);
   if ((FUNC_2(VAR_48 + VAR_19) & 0x7E) == 0x32) {
    FUNC_5(VAR_4, VAR_48 + VAR_7);
    VAR_45->type = 129;
    goto got_type;
   }
  }
 }

 FUNC_5(VAR_4, VAR_48 + VAR_7);
 if ((FUNC_2(VAR_48 + VAR_38) & 0x3F) == 0x00) {
  FUNC_5(VAR_33, VAR_48 + VAR_7);
  if ((FUNC_2(VAR_48 + VAR_38) & 0x3F) == 0x10) {
   FUNC_5(VAR_4, VAR_48 + VAR_7);
   VAR_45->type = 128;
   goto got_type;
  }
 }

 FUNC_5(VAR_10, VAR_48 + VAR_7);
 if (FUNC_2(VAR_48 + VAR_19) == 0x40) {
  FUNC_5(VAR_12, VAR_48 + VAR_7);
  if (FUNC_2(VAR_48 + VAR_19) == 0x40) {
   FUNC_5(VAR_11, VAR_48 + VAR_7);
   if (FUNC_2(VAR_48 + VAR_19) == 0x44) {
    FUNC_5(VAR_12, VAR_48 + VAR_7);
    VAR_45->type = 131;
    goto got_type;
   }
  }
 }

 FUNC_3(VAR_43, "Unknown card type\n");
 VAR_49 = -VAR_2;
 goto fail;

got_type:
 switch(VAR_48) {
  case 0x270:
  case 0x280:
  case 0x380:
  case 0x390:
   if (VAR_45->type != 128 && VAR_45->type != 129)
    goto fail;
 }

 switch (VAR_44->irq) {
  case 2:
   if (VAR_45->type != 130)
    goto fail;
   break;

  case 10:
  case 11:
  case 12:
  case 15:
  case 4:
   if (VAR_45->type != 128 && VAR_45->type != 129)
    goto fail;
   break;
  case 3:
  case 5:
  case 7:
   if (VAR_45->type == 131)
    goto fail;
   break;

  default:
   goto fail;
 }

 VAR_49 = -VAR_0;
 if (FUNC_8(VAR_43->irq, VAR_40, 0, VAR_43->name, VAR_43))
  goto fail;

 if (VAR_45->type == 129) {
  switch(VAR_43->irq) {
   case 3:
    VAR_45->state = VAR_25;
    break;
   case 4:
    VAR_45->state = VAR_26;
    break;
   case 5:
    VAR_45->state = VAR_27;
    break;
   case 7:
    VAR_45->state = VAR_28;
    break;
   case 10:
    VAR_45->state = VAR_21;
    break;
   case 11:
    VAR_45->state = VAR_22;
    break;
   case 12:
    VAR_45->state = VAR_23;
    break;
   case 15:
    VAR_45->state = VAR_24;
    break;
  }
 }

 for(VAR_46=0; VAR_46 < FUNC_0(VAR_41); VAR_46++)
  if (VAR_41[VAR_46] == VAR_44->mem_start)
   break;

 VAR_49 = -VAR_1;
 if (VAR_46 == FUNC_0(VAR_41))
  goto fail2;

 if (VAR_45->type == 131 && (VAR_44->mem_start & 0xF000) >> 12 == 0x0E)
  goto fail2;

 if (VAR_45->type != 129 && VAR_44->mem_start >> 16 == 0x0B)
  goto fail2;

 if (VAR_45->type == 129 && VAR_44->mem_start >> 16 == 0x0D)
  goto fail2;

 VAR_47 = VAR_45->type != 128 ? VAR_3 : 0;
 VAR_47 |= (VAR_44->mem_start & 0xF000) >> (12 + (VAR_45->type == 128 ? 1 : 0));
 switch(VAR_45->type) {
  case 131:
  case 130:
   switch (VAR_44->mem_start >> 16) {
    case 0x0A:
     VAR_47 |= VAR_15;
     break;
    case 0x0C:
     VAR_47 |= VAR_16;
     break;
    case 0x0D:
     VAR_47 |= VAR_17;
     break;
    case 0x0E:
     VAR_47 |= VAR_18;
     break;
   }
   break;
  case 129:
   switch (VAR_44->mem_start >> 16) {
    case 0x0A:
     VAR_47 |= VAR_29;
     break;
    case 0x0B:
     VAR_47 |= VAR_30;
     break;
    case 0x0C:
     VAR_47 |= VAR_31;
     break;
    case 0x0E:
     VAR_47 |= VAR_32;
     break;
   }
   break;
  case 128:
   switch (VAR_44->mem_start >> 16) {
    case 0x0A:
     VAR_47 |= VAR_34;
     break;
    case 0x0C:
     VAR_47 |= VAR_35;
     break;
    case 0x0D:
     VAR_47 |= VAR_36;
     break;
    case 0x0E:
     VAR_47 |= VAR_37;
     break;
   }
   break;
 }


 FUNC_5(VAR_47, VAR_48 + VAR_8);

 switch(VAR_45->type)
 {
  case 130:
   VAR_45->state = VAR_13;
   break;
  case 129:
   VAR_45->state |= VAR_6;
   break;
  case 128:
   VAR_45->state = VAR_6;
   break;
 }
 FUNC_5(VAR_45->state, VAR_48 + VAR_7);

 VAR_43->irq = VAR_44->irq;
 VAR_43->base_addr = VAR_48;
 VAR_43->mem_start = VAR_44->mem_start;
 VAR_43->mem_end = VAR_43->mem_start + 0x2000;
 VAR_45->initialized = 1;
 return 0;

fail2:
 FUNC_1(VAR_44->irq, VAR_43);
fail:
 FUNC_7(VAR_48, VAR_5);
 return VAR_49;
}
