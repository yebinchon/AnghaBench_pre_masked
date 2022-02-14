
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_spilib {void* max_speed_hz; void* min_speed_hz; int num_chipselect; void* bits_per_word_mask; int flags; int mode; int connection; } ;
struct gb_spi_master_config_response {int max_speed_hz; int min_speed_hz; int num_chipselect; int bits_per_word_mask; int flags; int mode; } ;
typedef int response ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,struct gb_spi_master_config_response*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gb_spilib *VAR_1)
{
 struct gb_spi_master_config_response VAR_2;
 u16 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->connection, VAR_0,
    ((void*)0), 0, &VAR_2, sizeof(VAR_2));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3 = FUNC_3(VAR_2.mode);
 VAR_1->mode = FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_2.flags);
 VAR_1->flags = FUNC_1(VAR_4);

 VAR_1->bits_per_word_mask = FUNC_4(VAR_2.bits_per_word_mask);
 VAR_1->num_chipselect = VAR_2.num_chipselect;

 VAR_1->min_speed_hz = FUNC_4(VAR_2.min_speed_hz);
 VAR_1->max_speed_hz = FUNC_4(VAR_2.max_speed_hz);

 return 0;
}
