
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adf7242_local {int bmux; int buf_stat_rx; int stat_msg; int spi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct adf7242_local *VAR_0, u8 *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->bmux);
 VAR_2 = FUNC_2(VAR_0->spi, &VAR_0->stat_msg);
 *VAR_1 = VAR_0->buf_stat_rx;
 FUNC_1(&VAR_0->bmux);

 return VAR_2;
}
