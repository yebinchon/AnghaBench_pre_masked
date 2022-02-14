
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int height; } ;
struct vc_data {unsigned int vc_scan_lines; TYPE_1__ vc_font; TYPE_2__* vc_sw; } ;
struct TYPE_6__ {struct vc_data* d; } ;
struct TYPE_5__ {int (* con_cursor ) (struct vc_data*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vc_data*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vc_data*,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_6 (struct vc_data*,int ,int) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct vc_data *VAR_10, unsigned VAR_11)
{
 unsigned char VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_15 = VAR_10->vc_scan_lines / VAR_11;
 VAR_16 = VAR_15 * VAR_11 - 1;
 FUNC_3(&VAR_6);
 FUNC_2(0x07, VAR_8);
 VAR_12 = FUNC_1(VAR_9);
 FUNC_2(0x09, VAR_8);
 VAR_14 = FUNC_1(VAR_9);
 FUNC_4(&VAR_6);

 VAR_13 = VAR_16 & 0xff;
 VAR_12 = (VAR_12 & 0xbd) +
     ((VAR_16 & 0x100) >> 7) + ((VAR_16 & 0x200) >> 3);
 VAR_14 = (VAR_14 & 0xe0) + (VAR_11 - 1);

 FUNC_3(&VAR_6);
 FUNC_2(0x07, VAR_8);
 FUNC_2(VAR_12, VAR_9);
 FUNC_2(0x09, VAR_8);
 FUNC_2(VAR_14, VAR_9);
 FUNC_2(0x12, VAR_8);
 FUNC_2(VAR_13, VAR_9);
 FUNC_4(&VAR_6);
 VAR_7 = VAR_11;

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  struct vc_data *VAR_18 = VAR_4[VAR_17].d;

  if (VAR_18 && VAR_18->vc_sw == &VAR_5) {
   if (FUNC_0(VAR_18)) {

    VAR_2 = 0;
    VAR_3 = 0;
    VAR_18->vc_sw->con_cursor(VAR_18, VAR_0);
   }
   VAR_18->vc_font.height = VAR_11;
   FUNC_6(VAR_18, 0, VAR_15);
  }
 }
 return 0;
}
