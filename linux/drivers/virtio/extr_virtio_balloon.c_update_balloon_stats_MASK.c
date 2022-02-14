
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {int dummy; } ;
struct sysinfo {unsigned long freeram; unsigned long totalram; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (unsigned long*) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 long FUNC_3 () ;
 int FUNC_4 (struct sysinfo*) ;
 int FUNC_5 (struct virtio_balloon*,int ,int ,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_6(struct virtio_balloon *VAR_18)
{
 unsigned long VAR_19[VAR_3];
 struct sysinfo VAR_20;
 unsigned int VAR_21 = 0;
 long VAR_22;
 unsigned long VAR_23;

 FUNC_0(VAR_19);
 FUNC_4(&VAR_20);

 VAR_22 = FUNC_3();
 VAR_23 = FUNC_1(VAR_2);
 FUNC_5(VAR_18, VAR_21++, VAR_13,
    FUNC_2(VAR_20.freeram));
 FUNC_5(VAR_18, VAR_21++, VAR_14,
    FUNC_2(VAR_20.totalram));
 FUNC_5(VAR_18, VAR_21++, VAR_8,
    FUNC_2(VAR_22));
 FUNC_5(VAR_18, VAR_21++, VAR_9,
    FUNC_2(VAR_23));

 return VAR_21;
}
