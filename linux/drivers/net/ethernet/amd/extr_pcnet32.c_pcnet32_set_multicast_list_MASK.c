
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcnet32_private {int options; int lock; TYPE_2__* a; TYPE_1__* init_block; } ;
struct net_device {unsigned long base_addr; int flags; } ;
struct TYPE_4__ {int (* read_csr ) (unsigned long,int ) ;int (* write_csr ) (unsigned long,int ,int) ;} ;
struct TYPE_3__ {void* mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int VAR_6 ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pcnet32_private*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcnet32_private*,unsigned long) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,unsigned long*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (unsigned long,int ) ;
 int FUNC_11 (unsigned long,int ,int) ;
 int FUNC_12 (unsigned long,int ,int) ;
 int FUNC_13 (unsigned long,int ,int) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_7)
{
 unsigned long VAR_8 = VAR_7->base_addr, VAR_9;
 struct pcnet32_private *VAR_10 = FUNC_1(VAR_7);
 int VAR_11, VAR_12;

 FUNC_8(&VAR_10->lock, VAR_9);
 VAR_12 = FUNC_7(VAR_7, &VAR_9, 0);
 VAR_11 = VAR_10->a->read_csr(VAR_8, VAR_3);
 if (VAR_7->flags & VAR_4) {

  FUNC_2(VAR_10, VAR_6, VAR_7, "Promiscuous mode enabled\n");
  VAR_10->init_block->mode =
      FUNC_0(0x8000 | (VAR_10->options & VAR_5) <<
    7);
  VAR_10->a->write_csr(VAR_8, VAR_3, VAR_11 | 0x8000);
 } else {
  VAR_10->init_block->mode =
      FUNC_0((VAR_10->options & VAR_5) << 7);
  VAR_10->a->write_csr(VAR_8, VAR_3, VAR_11 & 0x7fff);
  FUNC_5(VAR_7);
 }

 if (VAR_12) {
  FUNC_4(VAR_10, VAR_8);
 } else {
  VAR_10->a->write_csr(VAR_8, VAR_0, VAR_2);
  FUNC_6(VAR_7, VAR_1);
  FUNC_3(VAR_7);
 }

 FUNC_9(&VAR_10->lock, VAR_9);
}
