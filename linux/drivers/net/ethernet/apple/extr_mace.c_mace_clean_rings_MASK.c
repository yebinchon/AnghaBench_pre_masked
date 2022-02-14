
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mace_data {int tx_empty; int tx_fill; int ** tx_bufs; int ** rx_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct mace_data *VAR_2)
{
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
 if (VAR_2->rx_bufs[VAR_3] != ((void*)0)) {
     FUNC_0(VAR_2->rx_bufs[VAR_3]);
     VAR_2->rx_bufs[VAR_3] = ((void*)0);
 }
    }
    for (VAR_3 = VAR_2->tx_empty; VAR_3 != VAR_2->tx_fill; ) {
 FUNC_0(VAR_2->tx_bufs[VAR_3]);
 if (++VAR_3 >= VAR_1)
     VAR_3 = 0;
    }
}
