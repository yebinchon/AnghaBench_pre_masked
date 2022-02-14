
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sclp_statechangebuf {int sclp_active_facility_mask; scalar_t__ validity_sclp_active_facility_mask; scalar_t__ validity_sclp_send_mask; scalar_t__ validity_sclp_receive_mask; } ;
struct evbuf_header {int dummy; } ;
struct TYPE_2__ {int facilities; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sclp_statechangebuf*) ;
 int FUNC_2 (struct sclp_statechangebuf*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct evbuf_header *VAR_5)
{
 unsigned long VAR_6;
 struct sclp_statechangebuf *VAR_7;

 FUNC_0(sizeof(struct sclp_statechangebuf) > VAR_0);

 VAR_7 = (struct sclp_statechangebuf *) VAR_5;
 FUNC_4(&VAR_2, VAR_6);
 if (VAR_7->validity_sclp_receive_mask)
  VAR_3 = FUNC_1(VAR_7);
 if (VAR_7->validity_sclp_send_mask)
  VAR_4 = FUNC_2(VAR_7);
 FUNC_5(&VAR_2, VAR_6);
 if (VAR_7->validity_sclp_active_facility_mask)
  VAR_1.facilities = VAR_7->sclp_active_facility_mask;
 FUNC_3();
}
