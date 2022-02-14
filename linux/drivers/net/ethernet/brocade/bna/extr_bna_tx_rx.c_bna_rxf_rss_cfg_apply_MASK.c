
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int rss_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_rxf*) ;
 int FUNC_1 (struct bna_rxf*) ;
 int FUNC_2 (struct bna_rxf*) ;

__attribute__((used)) static int
FUNC_3(struct bna_rxf *VAR_3)
{
 if (VAR_3->rss_pending) {
  if (VAR_3->rss_pending & VAR_1) {
   VAR_3->rss_pending &= ~VAR_1;
   FUNC_0(VAR_3);
   return 1;
  }

  if (VAR_3->rss_pending & VAR_0) {
   VAR_3->rss_pending &= ~VAR_0;
   FUNC_1(VAR_3);
   return 1;
  }

  if (VAR_3->rss_pending & VAR_2) {
   VAR_3->rss_pending &= ~VAR_2;
   FUNC_2(VAR_3);
   return 1;
  }
 }

 return 0;
}
