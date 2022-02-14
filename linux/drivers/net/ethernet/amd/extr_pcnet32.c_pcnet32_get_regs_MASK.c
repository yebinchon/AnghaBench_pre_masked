
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef int u16 ;
struct pcnet32_private {int phymask; int lock; struct pcnet32_access* a; scalar_t__ mii; } ;
struct pcnet32_access {int (* read_csr ) (scalar_t__,int) ;scalar_t__ (* read_bcr ) (scalar_t__,int) ;int (* write_bcr ) (scalar_t__,int,int) ;} ;
struct net_device {scalar_t__ base_addr; } ;
struct ethtool_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pcnet32_private*,scalar_t__) ;
 int FUNC_3 (struct net_device*,unsigned long*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_4, struct ethtool_regs *VAR_5,
        void *VAR_6)
{
 int VAR_7, VAR_8;
 u16 *VAR_9 = VAR_6;
 struct pcnet32_private *VAR_10 = FUNC_1(VAR_4);
 const struct pcnet32_access *VAR_11 = VAR_10->a;
 ulong VAR_12 = VAR_4->base_addr;
 unsigned long VAR_13;

 FUNC_4(&VAR_10->lock, VAR_13);

 VAR_8 = VAR_11->read_csr(VAR_12, VAR_0);
 if (!(VAR_8 & VAR_1))
  FUNC_3(VAR_4, &VAR_13, 1);


 for (VAR_7 = 0; VAR_7 < 16; VAR_7 += 2)
  *VAR_9++ = FUNC_0(VAR_12 + VAR_7);


 for (VAR_7 = 0; VAR_7 < 90; VAR_7++)
  *VAR_9++ = VAR_11->read_csr(VAR_12, VAR_7);

 *VAR_9++ = VAR_11->read_csr(VAR_12, 112);
 *VAR_9++ = VAR_11->read_csr(VAR_12, 114);


 for (VAR_7 = 0; VAR_7 < 30; VAR_7++)
  *VAR_9++ = VAR_11->read_bcr(VAR_12, VAR_7);

 *VAR_9++ = 0;

 for (VAR_7 = 31; VAR_7 < 36; VAR_7++)
  *VAR_9++ = VAR_11->read_bcr(VAR_12, VAR_7);


 if (VAR_10->mii) {
  int VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
   if (VAR_10->phymask & (1 << VAR_14)) {
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
     VAR_10->a->write_bcr(VAR_12, 33,
       (VAR_14 << 5) | VAR_7);
     *VAR_9++ = VAR_10->a->read_bcr(VAR_12, 34);
    }
   }
  }
 }

 if (!(VAR_8 & VAR_1))
  FUNC_2(VAR_10, VAR_12);

 FUNC_5(&VAR_10->lock, VAR_13);
}
