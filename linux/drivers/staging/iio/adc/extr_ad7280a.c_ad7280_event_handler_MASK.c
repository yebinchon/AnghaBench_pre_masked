
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iio_dev {int dummy; } ;
struct ad7280_state {int scan_cnt; unsigned int cell_threshhigh; unsigned int cell_threshlow; unsigned int aux_threshhigh; unsigned int aux_threshlow; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ad7280_state*,int,unsigned int*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad7280_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;
 unsigned int* FUNC_6 (int,int,int ) ;
 int FUNC_7 (unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct iio_dev *VAR_10 = VAR_9;
 struct ad7280_state *VAR_11 = FUNC_4(VAR_10);
 unsigned int *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_6(VAR_11->scan_cnt, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return VAR_7;

 VAR_14 = FUNC_2(VAR_11, VAR_11->scan_cnt, VAR_12);
 if (VAR_14 < 0)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_11->scan_cnt; VAR_13++) {
  if (((VAR_12[VAR_13] >> 23) & 0xF) <= VAR_0) {
   if (((VAR_12[VAR_13] >> 11) & 0xFFF) >=
       VAR_11->cell_threshhigh) {
    u64 VAR_15 = FUNC_0(VAR_6, 1, 0,
        VAR_3,
        VAR_4,
        0, 0, 0);
    FUNC_5(VAR_10, VAR_15,
            FUNC_3(VAR_10));
   } else if (((VAR_12[VAR_13] >> 11) & 0xFFF) <=
       VAR_11->cell_threshlow) {
    u64 VAR_16 = FUNC_0(VAR_6, 1, 0,
        VAR_2,
        VAR_4,
        0, 0, 0);
    FUNC_5(VAR_10, VAR_16,
            FUNC_3(VAR_10));
   }
  } else {
   if (((VAR_12[VAR_13] >> 11) & 0xFFF) >=
       VAR_11->aux_threshhigh) {
    u64 VAR_17 = FUNC_1(VAR_5, 0,
       VAR_4,
       VAR_3);
    FUNC_5(VAR_10, VAR_17,
            FUNC_3(VAR_10));
   } else if (((VAR_12[VAR_13] >> 11) & 0xFFF) <=
    VAR_11->aux_threshlow) {
    u64 VAR_18 = FUNC_1(VAR_5, 0,
       VAR_4,
       VAR_2);
    FUNC_5(VAR_10, VAR_18,
            FUNC_3(VAR_10));
   }
  }
 }

out:
 FUNC_7(VAR_12);

 return VAR_7;
}
