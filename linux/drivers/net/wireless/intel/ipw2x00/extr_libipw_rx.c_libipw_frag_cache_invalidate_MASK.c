
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct libipw_hdr_4addr {int addr1; int addr2; int seq_ctl; } ;
struct libipw_frag_entry {int * skb; } ;
struct libipw_device {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct libipw_frag_entry* FUNC_3 (struct libipw_device*,unsigned int,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct libipw_device *VAR_0,
        struct libipw_hdr_4addr *VAR_1)
{
 u16 VAR_2;
 unsigned int VAR_3;
 struct libipw_frag_entry *VAR_4;

 VAR_2 = FUNC_2(VAR_1->seq_ctl);
 VAR_3 = FUNC_1(VAR_2);

 VAR_4 = FUNC_3(VAR_0, VAR_3, -1, VAR_1->addr2,
       VAR_1->addr1);

 if (VAR_4 == ((void*)0)) {
  FUNC_0("could not invalidate fragment cache "
         "entry (seq=%u)\n", VAR_3);
  return -1;
 }

 VAR_4->skb = ((void*)0);
 return 0;
}
