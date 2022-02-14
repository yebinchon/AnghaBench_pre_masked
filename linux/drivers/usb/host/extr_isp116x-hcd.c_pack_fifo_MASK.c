
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptd {int faddr; int len; int mps; int count; } ;
struct isp116x_ep {int length; int data; struct isp116x_ep* active; struct ptd ptd; } ;
struct isp116x {scalar_t__ atl_last_dir; int atl_bufshrt; int atl_buflen; struct isp116x_ep* atl_active; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ptd*) ;
 int FUNC_3 (struct ptd*,int ) ;
 int FUNC_4 (struct isp116x*,int) ;
 int FUNC_5 (struct isp116x*,int ) ;
 int FUNC_6 (struct isp116x*,int ,int) ;
 int FUNC_7 (struct isp116x*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct isp116x *VAR_6)
{
 struct isp116x_ep *VAR_7;
 struct ptd *VAR_8;
 int VAR_9 = VAR_6->atl_last_dir == VAR_5
     ? VAR_6->atl_bufshrt : VAR_6->atl_buflen;

 FUNC_6(VAR_6, VAR_2, VAR_3);
 FUNC_6(VAR_6, VAR_1, VAR_9);
 FUNC_4(VAR_6, VAR_0 | VAR_4);
 for (VAR_7 = VAR_6->atl_active; VAR_7; VAR_7 = VAR_7->active) {
  VAR_8 = &VAR_7->ptd;
  FUNC_2(VAR_8);
  FUNC_3(VAR_8, VAR_7->data);
  FUNC_5(VAR_6, VAR_8->count);
  FUNC_5(VAR_6, VAR_8->mps);
  FUNC_5(VAR_6, VAR_8->len);
  FUNC_5(VAR_6, VAR_8->faddr);
  VAR_9 -= sizeof(struct ptd);

  if (VAR_7->active || (VAR_6->atl_last_dir != VAR_5)) {
   FUNC_7(VAR_6, VAR_7->data, VAR_7->length);
   VAR_9 -= FUNC_0(VAR_7->length, 4);
  }
 }
 FUNC_1(VAR_9);
}
