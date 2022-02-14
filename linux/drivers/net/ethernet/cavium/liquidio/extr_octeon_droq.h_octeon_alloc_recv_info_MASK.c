
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_recv_pkt {int dummy; } ;
struct octeon_recv_info {int * rsvd; struct octeon_recv_pkt* recv_pkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int ) ;

__attribute__((used)) static inline struct octeon_recv_info *FUNC_1(int VAR_3)
{
 struct octeon_recv_info *VAR_4;
 u8 *VAR_5;

 VAR_5 = FUNC_0(VAR_2 + VAR_1 +
        VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_4 = (struct octeon_recv_info *)VAR_5;
 VAR_4->recv_pkt =
  (struct octeon_recv_pkt *)(VAR_5 + VAR_1);
 VAR_4->rsvd = ((void*)0);
 if (VAR_3)
  VAR_4->rsvd = VAR_5 + VAR_1 + VAR_2;

 return VAR_4;
}
