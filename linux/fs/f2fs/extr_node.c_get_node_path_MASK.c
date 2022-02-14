
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 long const FUNC_0 (struct inode*) ;
 long FUNC_1 (struct inode*) ;
 int VAR_0 ;
 long const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_7, long VAR_8,
    int VAR_9[4], unsigned int VAR_10[4])
{
 const long VAR_11 = FUNC_1(VAR_7);
 const long VAR_12 = FUNC_0(VAR_7);
 const long VAR_13 = VAR_1;
 const long VAR_14 = FUNC_0(VAR_7) * VAR_1;
 const long VAR_15 = VAR_14 * VAR_1;
 int VAR_16 = 0;
 int VAR_17 = 0;

 VAR_10[0] = 0;

 if (VAR_8 < VAR_11) {
  VAR_9[VAR_16] = VAR_8;
  goto got;
 }
 VAR_8 -= VAR_11;
 if (VAR_8 < VAR_12) {
  VAR_9[VAR_16++] = VAR_3;
  VAR_10[VAR_16] = 1;
  VAR_9[VAR_16] = VAR_8;
  VAR_17 = 1;
  goto got;
 }
 VAR_8 -= VAR_12;
 if (VAR_8 < VAR_12) {
  VAR_9[VAR_16++] = VAR_4;
  VAR_10[VAR_16] = 2;
  VAR_9[VAR_16] = VAR_8;
  VAR_17 = 1;
  goto got;
 }
 VAR_8 -= VAR_12;
 if (VAR_8 < VAR_14) {
  VAR_9[VAR_16++] = VAR_5;
  VAR_10[VAR_16] = 3;
  VAR_9[VAR_16++] = VAR_8 / VAR_12;
  VAR_10[VAR_16] = 4 + VAR_9[VAR_16 - 1];
  VAR_9[VAR_16] = VAR_8 % VAR_12;
  VAR_17 = 2;
  goto got;
 }
 VAR_8 -= VAR_14;
 if (VAR_8 < VAR_14) {
  VAR_9[VAR_16++] = VAR_6;
  VAR_10[VAR_16] = 4 + VAR_13;
  VAR_9[VAR_16++] = VAR_8 / VAR_12;
  VAR_10[VAR_16] = 5 + VAR_13 + VAR_9[VAR_16 - 1];
  VAR_9[VAR_16] = VAR_8 % VAR_12;
  VAR_17 = 2;
  goto got;
 }
 VAR_8 -= VAR_14;
 if (VAR_8 < VAR_15) {
  VAR_9[VAR_16++] = VAR_2;
  VAR_10[VAR_16] = 5 + (VAR_13 * 2);
  VAR_9[VAR_16++] = VAR_8 / VAR_14;
  VAR_10[VAR_16] = 6 + (VAR_13 * 2) +
         VAR_9[VAR_16 - 1] * (VAR_13 + 1);
  VAR_9[VAR_16++] = (VAR_8 / VAR_12) % VAR_13;
  VAR_10[VAR_16] = 7 + (VAR_13 * 2) +
         VAR_9[VAR_16 - 2] * (VAR_13 + 1) +
         VAR_9[VAR_16 - 1];
  VAR_9[VAR_16] = VAR_8 % VAR_12;
  VAR_17 = 3;
  goto got;
 } else {
  return -VAR_0;
 }
got:
 return VAR_17;
}
