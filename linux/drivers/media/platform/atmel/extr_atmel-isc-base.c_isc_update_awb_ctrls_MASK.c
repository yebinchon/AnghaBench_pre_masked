
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isc_ctrls {int* offset; int* gain; } ;
struct isc_device {int regmap; struct isc_ctrls ctrls; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct isc_device *VAR_9)
{
 struct isc_ctrls *VAR_10 = &VAR_9->ctrls;

 FUNC_0(VAR_9->regmap, VAR_7,
       (VAR_8 - (VAR_10->offset[VAR_3])) |
       ((VAR_8 - VAR_10->offset[VAR_2]) << 16));
 FUNC_0(VAR_9->regmap, VAR_6,
       (VAR_8 - (VAR_10->offset[VAR_0])) |
       ((VAR_8 - VAR_10->offset[VAR_1]) << 16));
 FUNC_0(VAR_9->regmap, VAR_5,
       VAR_10->gain[VAR_3] |
       (VAR_10->gain[VAR_2] << 16));
 FUNC_0(VAR_9->regmap, VAR_4,
       VAR_10->gain[VAR_0] |
       (VAR_10->gain[VAR_1] << 16));
}
