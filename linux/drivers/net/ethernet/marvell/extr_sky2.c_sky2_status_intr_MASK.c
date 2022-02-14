
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sky2_status_le {int opcode; unsigned int css; int status; int length; } ;
struct sky2_port {int dummy; } ;
struct sky2_hw {scalar_t__ st_idx; int flags; struct net_device** dev; int st_size; struct sky2_status_le* st_le; } ;
struct sk_buff {int protocol; int ip_summed; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 struct sky2_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 () ;
 struct sk_buff* FUNC_9 (struct net_device*,scalar_t__,int) ;
 int FUNC_10 (struct sky2_port*,int) ;
 int FUNC_11 (struct sky2_hw*,int,unsigned int,unsigned int) ;
 int FUNC_12 (struct sky2_port*,int) ;
 int FUNC_13 (struct sky2_port*,scalar_t__) ;
 int FUNC_14 (struct sky2_port*,struct sk_buff*) ;
 int FUNC_15 (struct net_device*,int) ;
 int FUNC_16 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct sky2_hw *VAR_11, int VAR_12, u16 VAR_13)
{
 int VAR_14 = 0;
 unsigned int VAR_15[2] = { 0 };
 unsigned int VAR_16[2] = { 0 };

 if (VAR_12 <= 0)
  return VAR_14;

 FUNC_8();
 do {
  struct sky2_port *VAR_17;
  struct sky2_status_le *VAR_18 = VAR_11->st_le + VAR_11->st_idx;
  unsigned VAR_19;
  struct net_device *VAR_20;
  struct sk_buff *VAR_21;
  u32 VAR_22;
  u16 VAR_23;
  u8 VAR_24 = VAR_18->opcode;

  if (!(VAR_24 & VAR_6))
   break;

  VAR_11->st_idx = FUNC_0(VAR_11->st_idx, VAR_11->st_size);

  VAR_19 = VAR_18->css & VAR_4;
  VAR_20 = VAR_11->dev[VAR_19];
  VAR_17 = FUNC_6(VAR_20);
  VAR_23 = FUNC_2(VAR_18->length);
  VAR_22 = FUNC_3(VAR_18->status);

  VAR_18->opcode = 0;
  switch (VAR_24 & ~VAR_6) {
  case 130:
   VAR_16[VAR_19]++;
   VAR_15[VAR_19] += VAR_23;

   VAR_21 = FUNC_9(VAR_20, VAR_23, VAR_22);
   if (!VAR_21)
    break;


   if (VAR_11->flags & VAR_9) {
    if ((VAR_20->features & VAR_7) &&
        (VAR_18->css & (VAR_2 | VAR_3)) &&
        (VAR_18->css & VAR_5))
     VAR_21->ip_summed = VAR_1;
    else
     VAR_21->ip_summed = VAR_0;
   }

   VAR_21->protocol = FUNC_1(VAR_21, VAR_20);
   FUNC_14(VAR_17, VAR_21);


   if (++VAR_14 >= VAR_12)
    goto exit_loop;
   break;

  case 129:
   FUNC_13(VAR_17, VAR_23);
   break;

  case 131:
   FUNC_13(VAR_17, VAR_23);

  case 132:
   if (FUNC_4(VAR_20->features & VAR_7))
    FUNC_10(VAR_17, VAR_22);
   break;

  case 133:
   FUNC_12(VAR_17, VAR_22);
   break;

  case 128:

   FUNC_15(VAR_11->dev[0], VAR_22 & 0xfff);
   if (VAR_11->dev[1])
    FUNC_15(VAR_11->dev[1],
         ((VAR_22 >> 24) & 0xff)
          | (u16)(VAR_23 & 0xf) << 8);
   break;

  default:
   if (FUNC_5())
    FUNC_7("unknown status opcode 0x%x\n", VAR_24);
  }
 } while (VAR_11->st_idx != VAR_13);


 FUNC_16(VAR_11, VAR_10, VAR_8);

exit_loop:
 FUNC_11(VAR_11, 0, VAR_16[0], VAR_15[0]);
 FUNC_11(VAR_11, 1, VAR_16[1], VAR_15[1]);

 return VAR_14;
}
