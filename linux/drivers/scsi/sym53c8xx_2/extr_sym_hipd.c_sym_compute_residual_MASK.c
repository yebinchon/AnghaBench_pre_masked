
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct sym_hcb {int dummy; } ;
struct TYPE_4__ {scalar_t__ lastp; } ;
struct TYPE_6__ {TYPE_2__* data; TYPE_1__ head; } ;
struct sym_ccb {int xerr_status; scalar_t__ goalp; scalar_t__ startp; int data_len; int odd_byte_adjustment; int host_flags; int ext_ofs; int ext_sg; TYPE_3__ phys; scalar_t__ extra_bytes; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sym_hcb*,struct sym_ccb*,int,int*) ;

int FUNC_2(struct sym_hcb *VAR_5, struct sym_ccb *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 int VAR_9 = 0;
 if (VAR_6->xerr_status & (VAR_2|VAR_3|VAR_4)) {
  if (VAR_6->xerr_status & VAR_2)
   VAR_8 -= VAR_6->extra_bytes;
  if (VAR_6->xerr_status & VAR_3)
   ++VAR_8;
  if (VAR_6->xerr_status & VAR_4)
   --VAR_8;
 }





 if (VAR_6->phys.head.lastp == VAR_6->goalp)
  return VAR_8;





 if (VAR_6->startp == VAR_6->phys.head.lastp ||
     FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_6->phys.head.lastp),
       &VAR_9) < 0) {
  return VAR_6->data_len - VAR_6->odd_byte_adjustment;
 }




 if (VAR_6->host_flags & VAR_0) {
  return -VAR_9;
 }





 VAR_8 = -VAR_6->ext_ofs;
 for (VAR_7 = VAR_6->ext_sg; VAR_7 < VAR_1; ++VAR_7) {
  u_int VAR_10 = FUNC_0(VAR_6->phys.data[VAR_7].size);
  VAR_8 += (VAR_10 & 0xffffff);
 }

 VAR_8 -= VAR_6->odd_byte_adjustment;




 return VAR_8;
}
