
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int rx_count; scalar_t__ rx_chnl; int * rx_skb; int rx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char,struct st_data_s*) ;

__attribute__((used)) static inline int FUNC_5(struct st_data_s *VAR_2,
 unsigned char VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_3(VAR_2->rx_skb);

 FUNC_1("len %d room %d", VAR_4, VAR_5);

 if (!VAR_4) {




  FUNC_4(VAR_3, VAR_2);

 } else if (VAR_4 > VAR_5) {



  FUNC_2("Data length is too large len %d room %d", VAR_4,
      VAR_5);
  FUNC_0(VAR_2->rx_skb);
 } else {



  VAR_2->rx_state = VAR_0;
  VAR_2->rx_count = VAR_4;
  return VAR_4;
 }



 VAR_2->rx_state = VAR_1;
 VAR_2->rx_skb = ((void*)0);
 VAR_2->rx_count = 0;
 VAR_2->rx_chnl = 0;

 return 0;
}
