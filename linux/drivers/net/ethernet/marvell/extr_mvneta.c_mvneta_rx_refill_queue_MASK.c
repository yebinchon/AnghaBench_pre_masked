
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_rx_queue {int first_to_refill; int refill_num; int refill_err; int id; struct mvneta_rx_desc* descs; } ;
struct mvneta_rx_desc {int buf_phys_addr; } ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvneta_rx_queue*,int) ;
 scalar_t__ FUNC_1 (struct mvneta_port*,struct mvneta_rx_desc*,struct mvneta_rx_queue*,int ) ;
 int FUNC_2 (char*,int ,int,int) ;

__attribute__((used)) static inline
int FUNC_3(struct mvneta_port *VAR_1, struct mvneta_rx_queue *VAR_2)
{
 struct mvneta_rx_desc *VAR_3;
 int VAR_4 = VAR_2->first_to_refill;
 int VAR_5;

 for (VAR_5 = 0; (VAR_5 < VAR_2->refill_num) && (VAR_5 < 64); VAR_5++) {
  VAR_3 = VAR_2->descs + VAR_4;
  if (!(VAR_3->buf_phys_addr)) {
   if (FUNC_1(VAR_1, VAR_3, VAR_2, VAR_0)) {
    FUNC_2("Can't refill queue %d. Done %d from %d\n",
           VAR_2->id, VAR_5, VAR_2->refill_num);
    VAR_2->refill_err++;
    break;
   }
  }
  VAR_4 = FUNC_0(VAR_2, VAR_4);
 }
 VAR_2->refill_num -= VAR_5;
 VAR_2->first_to_refill = VAR_4;

 return VAR_5;
}
