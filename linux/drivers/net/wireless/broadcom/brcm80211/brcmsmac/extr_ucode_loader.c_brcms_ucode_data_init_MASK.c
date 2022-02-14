
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_ucode {int bcm43xx_bomminor; int bcm43xx_bommajor; int bcm43xx_24_lcnsz; int bcm43xx_24_lcn; int bcm43xx_16_mimosz; int bcm43xx_16_mimo; int d11n0initvals16; int d11n0bsinitvals16; int d11n0absinitvals16; int d11lcn2initvals24; int d11lcn2bsinitvals24; int d11lcn1initvals24; int d11lcn1bsinitvals24; int d11lcn0initvals24; int d11lcn0bsinitvals24; } ;
struct brcms_info {int dummy; } ;


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
 int VAR_14 ;
 int FUNC_0 (struct brcms_info*) ;
 int FUNC_1 (struct brcms_info*,void**,int ) ;
 int FUNC_2 (struct brcms_info*,int *,int ) ;

int FUNC_3(struct brcms_info *VAR_15, struct brcms_ucode *VAR_16)
{
 int VAR_17;

 VAR_17 = FUNC_0(VAR_15);

 VAR_17 = VAR_17 < 0 ? VAR_17 :
  FUNC_1(VAR_15, (void **)&VAR_16->d11lcn0bsinitvals24,
         VAR_0);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11lcn0initvals24,
           VAR_1);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11lcn1bsinitvals24,
           VAR_2);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11lcn1initvals24,
           VAR_3);
 VAR_17 = VAR_17 < 0 ? VAR_17 :
  FUNC_1(VAR_15, (void **)&VAR_16->d11lcn2bsinitvals24,
         VAR_4);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11lcn2initvals24,
           VAR_5);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11n0absinitvals16,
           VAR_6);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11n0bsinitvals16,
           VAR_7);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->d11n0initvals16,
           VAR_8);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->bcm43xx_16_mimo,
           VAR_9);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_2(VAR_15, &VAR_16->bcm43xx_16_mimosz,
     VAR_10);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->bcm43xx_24_lcn,
           VAR_11);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_2(VAR_15, &VAR_16->bcm43xx_24_lcnsz,
     VAR_12);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->bcm43xx_bommajor,
           VAR_13);
 VAR_17 = VAR_17 < 0 ?
      VAR_17 : FUNC_1(VAR_15, (void **)&VAR_16->bcm43xx_bomminor,
           VAR_14);
 return VAR_17;
}
