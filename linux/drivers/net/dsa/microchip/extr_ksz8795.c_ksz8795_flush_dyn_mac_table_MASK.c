
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct ksz_port {int on; } ;
struct ksz_device {int mib_port_cnt; struct ksz_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;
 int FUNC_1 (struct ksz_device*,int,int ,int*) ;
 int FUNC_2 (struct ksz_device*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ksz_device *VAR_5, int VAR_6)
{
 u8 VAR_7[VAR_4];
 int VAR_8, VAR_9, VAR_10;
 struct ksz_port *VAR_11;

 if ((uint)VAR_6 < VAR_4) {
  VAR_8 = VAR_6;
  VAR_10 = VAR_6 + 1;
 } else {

  VAR_8 = 0;
  VAR_10 = VAR_5->mib_port_cnt;
 }
 for (VAR_9 = VAR_8; VAR_9 < VAR_10; VAR_9++) {
  VAR_11 = &VAR_5->ports[VAR_9];
  if (!VAR_11->on)
   continue;
  FUNC_1(VAR_5, VAR_9, VAR_1, &VAR_7[VAR_9]);
  if (!(VAR_7[VAR_9] & VAR_0))
   FUNC_2(VAR_5, VAR_9, VAR_1,
        VAR_7[VAR_9] | VAR_0);
 }
 FUNC_0(VAR_5, VAR_3, VAR_2, 1);
 for (VAR_9 = VAR_8; VAR_9 < VAR_10; VAR_9++) {
  VAR_11 = &VAR_5->ports[VAR_9];
  if (!VAR_11->on)
   continue;
  if (!(VAR_7[VAR_9] & VAR_0))
   FUNC_2(VAR_5, VAR_9, VAR_1, VAR_7[VAR_9]);
 }
}
