
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct TYPE_8__ {TYPE_3__ fmt; } ;
struct atmel_isi {int enable_preview_path; TYPE_4__ fmt; TYPE_1__* current_fmt; } ;
struct TYPE_5__ {scalar_t__ fourcc; scalar_t__ swap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct atmel_isi*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atmel_isi *VAR_16)
{
 u32 VAR_17, VAR_18;
 u32 VAR_19 = VAR_16->current_fmt->fourcc;

 VAR_16->enable_preview_path = VAR_19 == VAR_15 ||
       VAR_19 == VAR_14;


 VAR_17 = VAR_16->current_fmt->swap;

 FUNC_0(VAR_16, VAR_5, VAR_6);

 VAR_17 |= ((VAR_16->fmt.fmt.pix.width - 1) << VAR_2) &
   VAR_1;

 VAR_17 |= ((VAR_16->fmt.fmt.pix.height - 1) << VAR_4)
   & VAR_3;
 FUNC_0(VAR_16, VAR_0, VAR_17);


 VAR_18 = ((VAR_16->fmt.fmt.pix.width - 1) << VAR_11) &
  VAR_10;
 VAR_18 |= ((VAR_16->fmt.fmt.pix.height - 1) << VAR_13) &
  VAR_12;
 FUNC_0(VAR_16, VAR_9, VAR_18);
 FUNC_0(VAR_16, VAR_7, VAR_8);
}
