
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int tx_buffer_count; int tx_buffer_list; int rx_buffer_count; int rx_buffer_list; } ;


 int FUNC_0 (struct mgsl_struct*) ;
 int FUNC_1 (struct mgsl_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_0 )
{
 FUNC_1( VAR_0, VAR_0->rx_buffer_list, VAR_0->rx_buffer_count );
 FUNC_1( VAR_0, VAR_0->tx_buffer_list, VAR_0->tx_buffer_count );
 FUNC_0( VAR_0 );

}
