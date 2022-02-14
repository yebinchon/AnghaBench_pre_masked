
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_ctx {int dummy; } ;
struct TCP_Server_Info {int sec_mskerberos; int sec_kerberosu2u; int sec_kerberos; int sec_ntlmssp; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct asn1_ctx*,unsigned char*) ;
 unsigned int FUNC_1 (struct asn1_ctx*,unsigned char**,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct asn1_ctx*,unsigned char*,unsigned long**,unsigned int*) ;
 int FUNC_3 (struct asn1_ctx*,unsigned char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (unsigned long*,unsigned int,int ,int ) ;
 int FUNC_6 (unsigned long*) ;

int
FUNC_7(unsigned char *VAR_19, int VAR_20,
      struct TCP_Server_Info *VAR_21)
{
 struct asn1_ctx VAR_22;
 unsigned char *VAR_23;
 unsigned char *VAR_24;
 unsigned long *VAR_25 = ((void*)0);
 unsigned int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;



 FUNC_3(&VAR_22, VAR_19, VAR_20);


 if (FUNC_1(&VAR_22, &VAR_23, &VAR_26, &VAR_27, &VAR_28) == 0) {
  FUNC_4(VAR_8, "Error decoding negTokenInit header\n");
  return 0;
 } else if ((VAR_26 != VAR_0) || (VAR_27 != VAR_1)
     || (VAR_28 != VAR_3)) {
  FUNC_4(VAR_8, "cls = %d con = %d tag = %d\n", VAR_26, VAR_27, VAR_28);
  return 0;
 }


 VAR_30 = FUNC_1(&VAR_22, &VAR_23, &VAR_26, &VAR_27, &VAR_28);
 if (VAR_30) {
  if ((VAR_28 == VAR_4) && (VAR_27 == VAR_5) &&
      (VAR_26 == VAR_7)) {
   VAR_30 = FUNC_2(&VAR_22, VAR_23, &VAR_25, &VAR_29);
   if (VAR_30) {
    VAR_30 = FUNC_5(VAR_25, VAR_29, VAR_17,
       VAR_18);
    FUNC_6(VAR_25);
   }
  } else
   VAR_30 = 0;
 }


 if (!VAR_30) {
  FUNC_4(VAR_8, "Error decoding negTokenInit header\n");
  return 0;
 }


 if (FUNC_1(&VAR_22, &VAR_23, &VAR_26, &VAR_27, &VAR_28) == 0) {
  FUNC_4(VAR_8, "Error decoding negTokenInit\n");
  return 0;
 } else if ((VAR_26 != VAR_2) || (VAR_27 != VAR_1)
     || (VAR_28 != VAR_3)) {
  FUNC_4(VAR_8, "cls = %d con = %d tag = %d end = %p (%d) exit 0\n",
    VAR_26, VAR_27, VAR_28, VAR_23, *VAR_23);
  return 0;
 }


 if (FUNC_1(&VAR_22, &VAR_23, &VAR_26, &VAR_27, &VAR_28) == 0) {
  FUNC_4(VAR_8, "Error decoding negTokenInit\n");
  return 0;
 } else if ((VAR_26 != VAR_7) || (VAR_27 != VAR_1)
     || (VAR_28 != VAR_6)) {
  FUNC_4(VAR_8, "cls = %d con = %d tag = %d end = %p (%d) exit 1\n",
    VAR_26, VAR_27, VAR_28, VAR_23, *VAR_23);
  return 0;
 }


 if (FUNC_1(&VAR_22, &VAR_23, &VAR_26, &VAR_27, &VAR_28) == 0) {
  FUNC_4(VAR_8, "Error decoding 2nd part of negTokenInit\n");
  return 0;
 } else if ((VAR_26 != VAR_2) || (VAR_27 != VAR_1)
     || (VAR_28 != VAR_3)) {
  FUNC_4(VAR_8, "cls = %d con = %d tag = %d end = %p (%d) exit 0\n",
    VAR_26, VAR_27, VAR_28, VAR_23, *VAR_23);
  return 0;
 }


 if (FUNC_1
     (&VAR_22, &VAR_24, &VAR_26, &VAR_27, &VAR_28) == 0) {
  FUNC_4(VAR_8, "Error decoding 2nd part of negTokenInit\n");
  return 0;
 } else if ((VAR_26 != VAR_7) || (VAR_27 != VAR_1)
     || (VAR_28 != VAR_6)) {
  FUNC_4(VAR_8, "cls = %d con = %d tag = %d end = %p (%d) exit 1\n",
    VAR_26, VAR_27, VAR_28, VAR_23, *VAR_23);
  return 0;
 }


 while (!FUNC_0(&VAR_22, VAR_24)) {
  VAR_30 = FUNC_1(&VAR_22, &VAR_23, &VAR_26, &VAR_27, &VAR_28);
  if (!VAR_30) {
   FUNC_4(VAR_8, "Error decoding negTokenInit hdr exit2\n");
   return 0;
  }
  if ((VAR_28 == VAR_4) && (VAR_27 == VAR_5)) {
   if (FUNC_2(&VAR_22, VAR_23, &VAR_25, &VAR_29)) {

    FUNC_4(VAR_8, "OID len = %d oid = 0x%lx 0x%lx 0x%lx 0x%lx\n",
      VAR_29, *VAR_25, *(VAR_25 + 1), *(VAR_25 + 2),
      *(VAR_25 + 3));

    if (FUNC_5(VAR_25, VAR_29, VAR_13,
      VAR_14))
     VAR_21->sec_mskerberos = 1;
    else if (FUNC_5(VAR_25, VAR_29, VAR_9,
           VAR_10))
     VAR_21->sec_kerberosu2u = 1;
    else if (FUNC_5(VAR_25, VAR_29, VAR_11,
           VAR_12))
     VAR_21->sec_kerberos = 1;
    else if (FUNC_5(VAR_25, VAR_29, VAR_15,
           VAR_16))
     VAR_21->sec_ntlmssp = 1;

    FUNC_6(VAR_25);
   }
  } else {
   FUNC_4(VAR_8, "Should be an oid what is going on?\n");
  }
 }






 return 1;
}
