
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int integer; int decimal; } ;
struct TYPE_13__ {int integer; int decimal; } ;
struct TYPE_12__ {int integer; int decimal; } ;
struct TYPE_11__ {int integer; int decimal; } ;
struct TYPE_15__ {TYPE_6__ b_mg; TYPE_5__ gb_g; TYPE_4__ gr_cy; TYPE_3__ r_ye; } ;
struct isif_gain_offsets_adj {int offset; TYPE_7__ gain; int offset_h3a_en; int offset_ipipe_en; int offset_sdram_en; int gain_h3a_en; int gain_ipipe_en; int gain_sdram_en; } ;
struct TYPE_9__ {struct isif_gain_offsets_adj gain_offset; } ;
struct TYPE_10__ {TYPE_1__ config_params; } ;
struct TYPE_16__ {TYPE_2__ bayer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_8__ VAR_14 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct isif_gain_offsets_adj *VAR_15 =
  &VAR_14.bayer.config_params.gain_offset;
 u32 VAR_16;

 VAR_16 = (!!VAR_15->gain_sdram_en << VAR_10) |
       (!!VAR_15->gain_ipipe_en << VAR_8) |
       (!!VAR_15->gain_h3a_en << VAR_6) |
       (!!VAR_15->offset_sdram_en << VAR_13) |
       (!!VAR_15->offset_ipipe_en << VAR_12) |
       (!!VAR_15->offset_h3a_en << VAR_11);

 FUNC_0(VAR_9, VAR_16, VAR_1);

 VAR_16 = (VAR_15->gain.r_ye.integer << VAR_7) |
        VAR_15->gain.r_ye.decimal;
 FUNC_1(VAR_16, VAR_5);

 VAR_16 = (VAR_15->gain.gr_cy.integer << VAR_7) |
        VAR_15->gain.gr_cy.decimal;
 FUNC_1(VAR_16, VAR_3);

 VAR_16 = (VAR_15->gain.gb_g.integer << VAR_7) |
        VAR_15->gain.gb_g.decimal;
 FUNC_1(VAR_16, VAR_2);

 VAR_16 = (VAR_15->gain.b_mg.integer << VAR_7) |
        VAR_15->gain.b_mg.decimal;
 FUNC_1(VAR_16, VAR_0);

 FUNC_1(VAR_15->offset, VAR_4);
}
